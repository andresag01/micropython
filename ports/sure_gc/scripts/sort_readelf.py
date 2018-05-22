#! /usr/bin/env python

import sys
import re
import os

readelf_pat = re.compile("^\s+[0-9]+:\s+(?P<addr>[0-9a-fA-F]{8})\s+" +
                         "(?P<size>\d+)\s+" +
                         "(NOTYPE|FUNC|FILE|SECTION|OBJECT)\s+" +
                         "(LOCAL|GLOBAL|WEAK)\s+" +
                         "(DEFAULT|PROTECTED|HIDDEN|INTERNAL)\s+" +
                         "(ABS|\d+)\s+(?P<name>.+)$")
size_pat = re.compile("^\.(?P<name>rodata|data|text|bss)\s+(?P<size>\d+)\s+" +
                      "(?P<addr>\d+)$")

def get_section(sections, addr):
    for section in sections:
        if section["addr"] > addr:
            continue
        elif addr >= section["addr"] + section["size"]:
            continue
        return section["name"]
    return "unknown"
    #print "Address", addr, "not in any known section!"
    #print sections
    #sys.exit(1)

if __name__ == "__main__":
    if len(sys.argv) != 4:
        print "This program takes the following arguments:"
        print "     (1) Output .sorted_readelf file"
        print "     (2) Size output"
        print "     (3) Readelf output"
        sys.exit(1)

    output_file = sys.argv[1]
    size_file = sys.argv[2]
    readelf_file = sys.argv[3]


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

    symbols = []
    with open(readelf_file, "r") as readelfstream:
        for line in readelfstream:
            m = readelf_pat.match(line)
            if m is None:
                continue
            addr = int(m.group("addr"), base=16)
            section = get_section(sections, addr)
            symbols.append((addr, section, line))

    sorted_symbols = sorted(symbols, key=lambda addr: addr[0])
    with open(output_file, "w") as outstream:
        for addr, section, line in sorted_symbols:
            outstream.write(".{0:<7}: {1}".format(section, line))
