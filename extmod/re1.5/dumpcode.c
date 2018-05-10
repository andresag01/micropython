// Copyright 2014 Paul Sokolovsky.
// Use of this source code is governed by a BSD-style
// license that can be found in the LICENSE file.

#include "re1.5.h"

#include "py/mpconfig.h"

#if MICROPY_DEBUG_VERBOSE // print debugging info
#define DEBUG_printf printf
#else // don't print debugging info
#define DEBUG_printf(...) (void)0
#endif

void re1_5_dumpcode(ByteProg *prog)
{
    int pc = 0;
    char *code = prog->insts;
    while (pc < prog->bytelen) {
                DEBUG_printf("%2d: ", pc);
                switch(code[pc++]) {
                default:
                        assert(0);
//                        re1_5_fatal("printprog");
                case Split:
                        DEBUG_printf("split %d (%d)\n",
                            pc + (signed char)code[pc] + 1,
                            (signed char)code[pc]);
                        pc++;
                        break;
                case RSplit:
                        DEBUG_printf("rsplit %d (%d)\n",
                            pc + (signed char)code[pc] + 1,
                            (signed char)code[pc]);
                        pc++;
                        break;
                case Jmp:
                        DEBUG_printf("jmp %d (%d)\n",
                            pc + (signed char)code[pc] + 1,
                            (signed char)code[pc]);
                        pc++;
                        break;
                case Char:
                        DEBUG_printf("char %c\n", code[pc]);
                        pc++;
                        break;
                case Any:
                        DEBUG_printf("any\n");
                        break;
                case Class:
                case ClassNot: {
                        int num = code[pc];
                        DEBUG_printf("class%s %d",
                            (code[pc - 1] == ClassNot ? "not" : ""), num);
                        pc++;
                        while (num--) {
                            DEBUG_printf(" 0x%02x-0x%02x", code[pc], code[pc + 1]);
                            pc += 2;
                        }
                        DEBUG_printf("\n");
                        break;
                }
                case NamedClass:
                        DEBUG_printf("namedclass %c\n", code[pc]);
                        pc++;
                        break;
                case Match:
                        DEBUG_printf("match\n");
                        break;
                case Save:
                        DEBUG_printf("save %d\n", (unsigned char)code[pc]);
                        pc++;
                        break;
                case Bol:
                        DEBUG_printf("assert bol\n");
                        break;
                case Eol:
                        DEBUG_printf("assert eol\n");
                        break;
                }
    }
    DEBUG_printf("Bytes: %d, insts: %d\n", prog->bytelen, prog->len);
}
