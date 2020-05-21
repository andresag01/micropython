// Copyright 2014 Paul Sokolovsky.
// Use of this source code is governed by a BSD-style
// license that can be found in the LICENSE file.

#include "re1.5.h"
#include "py/mpprint.h"

void re1_5_dumpcode(ByteProg *prog)
{
    int pc = 0;
    char *code = prog->insts;
    while (pc < prog->bytelen) {
                mp_printf_one(MP_PYTHON_PRINTER, "%2d: ", pc);
                switch(code[pc++]) {
                default:
                        assert(0);
//                        re1_5_fatal("printprog");
                case Split:
                        mp_printf_one(MP_PYTHON_PRINTER, "split %d ", pc + (signed char)code[pc] + 1);
						mp_printf_one(MP_PYTHON_PRINTER, "(%d)\n", (signed char)code[pc]);
                        pc++;
                        break;
                case RSplit:
                        mp_printf_one(MP_PYTHON_PRINTER, "rsplit %d ", pc + (signed char)code[pc] + 1);
						mp_printf_one(MP_PYTHON_PRINTER, "(%d)\n", (signed char)code[pc]);
                        pc++;
                        break;
                case Jmp:
                        mp_printf_one(MP_PYTHON_PRINTER, "jmp %d ", pc + (signed char)code[pc] + 1);
						mp_printf_one(MP_PYTHON_PRINTER, "(%d)\n", (signed char)code[pc]);
                        pc++;
                        break;
                case Char:
                        mp_printf_one(MP_PYTHON_PRINTER, "char %c\n", code[pc++]);
                        break;
                case Any:
                        mp_printf_one(MP_PYTHON_PRINTER, "any\n", 0);
                        break;
                case Class:
                case ClassNot: {
                        int num = code[pc];
                        mp_printf_one(MP_PYTHON_PRINTER, "class%s ", (size_t)(code[pc - 1] == ClassNot ? "not" : ""));
						mp_printf_one(MP_PYTHON_PRINTER, "%d", num);
                        pc++;
                        while (num--) {
                            mp_printf_one(MP_PYTHON_PRINTER, " 0x%02x-", code[pc]);
							mp_printf_one(MP_PYTHON_PRINTER, "0x%02x", code[pc + 1]);
                            pc += 2;
                        }
                        mp_printf_one(MP_PYTHON_PRINTER, "\n", 0);
                        break;
                }
                case NamedClass:
                        mp_printf_one(MP_PYTHON_PRINTER, "namedclass %c\n", code[pc++]);
                        break;
                case Match:
                        mp_printf_one(MP_PYTHON_PRINTER, "match\n", 0);
                        break;
                case Save:
                        mp_printf_one(MP_PYTHON_PRINTER, "save %d\n", (unsigned char)code[pc++]);
                        break;
                case Bol:
                        mp_printf_one(MP_PYTHON_PRINTER, "assert bol\n", 0);
                        break;
                case Eol:
                        mp_printf_one(MP_PYTHON_PRINTER, "assert eol\n", 0);
                        break;
                }
    }
    mp_printf_one(MP_PYTHON_PRINTER, "Bytes: %d, ", prog->bytelen);
	mp_printf_one(MP_PYTHON_PRINTER, "insts: %d\n", prog->len);
}
