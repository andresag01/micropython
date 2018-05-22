#! /usr/bin/env python

import sys
import re
import os

objdump_pat = re.compile("^\s+(?P<addr>[0-9a-fA-F]+):\s+[0-9a-fA-F]+\s+" +
                         "\.word\s+0x(?P<ptr>[0-9a-fA-F]+)$")
readelf_pat = re.compile("^\s+[0-9]+:\s+(?P<addr>[0-9a-fA-F]{8})\s+" +
                         "(?P<size>\d+)\s+" +
                         "(NOTYPE|FUNC|FILE|SECTION|OBJECT)\s+" +
                         "(LOCAL|GLOBAL|WEAK)\s+" +
                         "(DEFAULT|PROTECTED|HIDDEN|INTERNAL)\s+" +
                         "(ABS|\d+)\s+(?P<name>.+)$")
size_pat = re.compile("^\.(?P<name>rodata|data|text|bss)\s+(?P<size>\d+)\s+" +
                      "(?P<addr>\d+)$")
pflagcmd_comment_pat = re.compile("^#.*$")
pflagcmd_command_pat = re.compile("^(?P<cmd>makeptr|clearptr|makeptroffset)\s+.*$")
pflagcmd_makeptr_pat = re.compile("^makeptr\s+(?P<name>.+)$")
pflagcmd_clearptr_pat = re.compile("^clearptr\s+(?P<name>.+)$")
pflagcmd_makeptroffset_pat = re.compile("^makeptroffset\s+(?P<begin>[0-9]+)\s+(?P<length>[0-9]+|end)\s+(?P<name>.+)$")

def write_pflags(ptrs, output_file):
    with open(output_file, "w") as outstream:
        for ptr in ptrs:
            outstream.write("addr:0x{0:08X} ptr:0x{1:08X} section:.{2}\n".format(
                ptr["addr"], ptr["ptr"], ptr["section"]))

def pflagcmd_makeptroffset(cmd, symbols):
    m = pflagcmd_makeptroffset_pat.match(cmd)
    if m is None:
        print "Command '{0}' is invalid!".format(cmd)
        sys.exit(1)
    name = m.group("name")
    begin = int(m.group("begin"), base=10)
    length = m.group("length")

    for symbol in symbols:
        if symbol["name"] != name:
            continue

        # Work out the address range that we have to make a pointer
        # e.g [begin, end)
        begin = symbol["addr"] + begin
        if length == "end":
            end = symbol["addr"] + symbol["size"]
        else:
            end = begin + int(length, base=10)

        # Check that the ranges are sane
        if begin >= symbol["addr"] + symbol["size"]:
            print "Begin address out of bounds"
            sys.exit(1)
        elif begin == end:
            print "Begin and end addresses are the same"
            sys.exit(1)
        elif end > symbol["addr"] + symbol["size"]:
            print "End address out of bounds"
            sys.exit(1)

        new_ptrs = []
        for i in range(begin, end, 4):
            new_ptrs.append({
                "addr": i,
                "ptr": 0,
                "section": name,
            })
        return new_ptrs

    print ("Could not find name '{0}' from 'makeptroffset' command in symbol "
         + "table").format(name)
    sys.exit(1)

def pflagcmd_makeptr(cmd, symbols):
    m = pflagcmd_makeptr_pat.match(cmd)
    if m is None:
        print "Command '{0}' is invalid!".format(cmd)
        sys.exit(1)
    name = m.group("name")

    for symbol in symbols:
        if symbol["name"] != name:
            continue

        new_ptrs = []
        for i in range(symbol["addr"], symbol["addr"] + symbol["size"], 4):
            new_ptrs.append({
                "addr": i,
                "ptr": 0,
                "section": name,
            })

        return new_ptrs

    print ("Could not find name '{0}' from 'makeptr' command in symbol "  +
        "table").format(name)
    sys.exit(1)

def pflagcmd_clearptr(cmd, ptrs, symbols):
    m = pflagcmd_clearptr_pat.match(cmd)
    if m is None:
        print "Command '{0}' is invalid!".format(cmd)
        sys.exit(1)
    name = m.group("name")

    # Locate the information from the object we want to clear
    symbol_info = None
    for symbol in symbols:
        if symbol["name"] != name:
            continue
        symbol_info = symbol
        break

    if symbol_info is None:
        print ("Could not find name '{0}' from 'clearptr' command " +
            "in symbol table").format(name)
        sys.exit(1)

    # Get the indexes of the pointers to remove
    indexes = []
    for index, ptr in enumerate(ptrs):
        if symbol["addr"] > ptr["addr"]:
            continue
        elif ptr["addr"] >= symbol["addr"] + symbol["size"]:
            continue
        indexes.append(index)

    for index in indexes:
        ptrs.pop(index)

if __name__ == "__main__":
    if len(sys.argv) != 6:
        print "This program takes the following arguments:"
        print "     (1) Output .pflag file"
        print "     (2) Objdump output"
        print "     (3) Size output"
        print "     (4) Readelf output"
        print "     (5) Pflagcmd file"
        sys.exit(1)

    output_file = sys.argv[1]
    objdump_file = sys.argv[2]
    size_file = sys.argv[3]
    readelf_file = sys.argv[4]
    pflagcmd_file = sys.argv[5]

    # Parse objdump output and extract the potential pointers
    candidate_ptrs = []
    with open(objdump_file, "r") as objdumpstream:
        for line in objdumpstream:
            m = objdump_pat.match(line)
            if m is None:
                continue
            candidate_ptrs.append({
                "addr": int(m.group("addr"), base=16),
                "ptr": int(m.group("ptr"), base=16),
            })

    if len(candidate_ptrs) == 0:
        print "There are no pointers in this file!"
        sys.exit(1)

    # Parse the readelf output and get object names, addresses and sizes
    symbols = []
    with open(readelf_file, "r") as readelfstream:
        for line in readelfstream:
            m = readelf_pat.match(line)
            if m is None:
                continue
            symbols.append({
                "addr": int(m.group("addr"), base=16),
                "size": int(m.group("size"), base=10),
                "name": m.group("name"),
            })

    # Parse the size output and get the section addresses and sizes
    sections = []
    with open(size_file, "r") as sizestream:
        for line in sizestream:
            m = size_pat.match(line)
            if m is None:
                continue
            sections.append({
                "name": m.group("name"),
                "size": int(m.group("size"), base=10),
                "addr": int(m.group("addr"), base=10),
            })

    # Find out which of the candidates are pointers
    ptrs = []
    for candidate in candidate_ptrs:
        # Check if this value is inside one of the sections
        for section in sections:
            if section["addr"] > candidate["ptr"]:
                continue
            elif candidate["ptr"] >= section["addr"] + section["size"]:
                continue
            elif section["name"] == "text":
                # Exclude pointers to text
                continue

            # Check if the address actually is within some symbol
            for symbol in symbols:
                # WARNING: This will not work if the pointer is not to the
                # beginning of the object
                if symbol["addr"] != candidate["ptr"]:
                    continue

                # This is a pointer
                ptrs.append({
                    "addr": candidate["addr"],
                    "ptr": candidate["ptr"],
                    "section": section["name"],
                })

                break

            break

    # Check whether there is a commands file
    if not os.path.isfile(pflagcmd_file):
        write_pflags(ptrs, output_file)
        sys.exit(0)

    # Execute the commands in the pflagscmd file
    with open(pflagcmd_file, "r") as pflagcmdstream:
        for line in pflagcmdstream:
            if len(line.strip()) == 0:
                # Skip over empty lines
                continue

            m = pflagcmd_comment_pat.match(line)
            if m is not None:
                # This is a comment line, do nothing...
                continue

            m = pflagcmd_command_pat.match(line)
            if m is None:
                print "Failed to recognise command '{0}' in '{1}'".format(
                    line, pflagcmd_file)
                sys.exit(1)

            if m.group("cmd") == "makeptr":
                ptrs = ptrs + pflagcmd_makeptr(line, symbols)
            elif m.group("cmd") == "makeptroffset":
                ptrs = ptrs + pflagcmd_makeptroffset(line, symbols)
            elif m.group("cmd") == "clearptr":
                pflagcmd_clearptr(line, ptrs, symbols)
            else:
                print "Should never happen!"
                sys.exit(1)

    write_pflags(ptrs, output_file)
