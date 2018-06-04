#ifndef _SCRIPT_H_
#define _SCRIPT_H_

//#define SELECT_SCRIPT 1     /* bm_unpack_sequence.py */
//#define SELECT_SCRIPT 2     /* bm_regex_effbot.py */
//#define SELECT_SCRIPT 3     /* bm_fannkuch.py */
//#define SELECT_SCRIPT 4     /* bm_json_loads.py */
//#define SELECT_SCRIPT 5     /* bm_json_dumps.py */
//#define SELECT_SCRIPT 6     /* bm_nqueens.py */
//#define SELECT_SCRIPT 7     /* bm_deltablue.py */
//#define SELECT_SCRIPT 8     /* bm_meteor_contest.py */
//#define SELECT_SCRIPT 9     /* bm_hexiom.py */
//#define SELECT_SCRIPT 10    /* bm_pyflate.py */

#if SELECT_SCRIPT == 1

/* bm_unpack_sequence.py */
#define PYTHON_SCRIPT                                                   \
"import sys\n"                                                          \
"\n"                                                                    \
"\n"                                                                    \
"def do_unpacking(loops, to_unpack):\n"                                 \
"    range_it = range(loops)\n"                                         \
"\n"                                                                    \
"    for _ in range_it:\n"                                              \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"        a, b, c, d, e, f, g, h, i, j = to_unpack\n"                    \
"\n"                                                                    \
"\n"                                                                    \
"def bench_tuple_unpacking(loops):\n"                                   \
"    x = tuple(range(10))\n"                                            \
"    return do_unpacking(loops, x)\n"                                   \
"\n"                                                                    \
"\n"                                                                    \
"def bench_list_unpacking(loops):\n"                                    \
"    x = list(range(10))\n"                                             \
"    return do_unpacking(loops, x)\n"                                   \
"\n"                                                                    \
"\n"                                                                    \
"def bench_all(loops):\n"                                               \
"    bench_tuple_unpacking(10)\n"                                       \
"    bench_list_unpacking(10)\n"                                        \
"\n"                                                                    \
"\n"                                                                    \
"LOOPS = 1\n"                                                           \
"bench_all(LOOPS)\n"                                                    \
"sys.exit(0)"

#elif SELECT_SCRIPT == 2

/* bm_regex_effbot.py */
#define PYTHON_SCRIPT                                                   \
"import ure as re\n"                                                    \
"import sys\n"                                                          \
"\n"                                                                    \
"def re_compile(s):\n"                                                  \
"    return re.compile(s)\n"                                            \
"\n"                                                                    \
"def gen_regex_table():\n"                                              \
"    return [\n"                                                        \
"        re_compile('Python|Perl'),\n"                                  \
"        re_compile('Python|Perl'),\n"                                  \
"        re_compile('(Python|Perl)'),\n"                                \
"        re_compile('(?:Python|Perl)'),\n"                              \
"        re_compile('Python'),\n"                                       \
"        re_compile('Python'),\n"                                       \
"        re_compile('.*Python'),\n"                                     \
"        re_compile('.*Python.*'),\n"                                   \
"        re_compile('.*(Python)'),\n"                                   \
"        re_compile('.*(?:Python)'),\n"                                 \
"        re_compile('Python|Perl|Tcl'),\n"                              \
"        re_compile('Python|Perl|Tcl'),\n"                              \
"        re_compile('(Python|Perl|Tcl)'),\n"                            \
"        re_compile('(?:Python|Perl|Tcl)'),\n"                          \
"        re_compile('(Python)Python'),\n"                               \
"        re_compile('(Python)Python'),\n"                               \
"        re_compile('([0a-z][a-z0-9]*,)+'),\n"                          \
"        re_compile('(?:[0a-z][a-z0-9]*,)+'),\n"                        \
"        re_compile('([a-z][a-z0-9]*,)+'),\n"                           \
"        re_compile('(?:[a-z][a-z0-9]*,)+'),\n"                         \
"        re_compile('.*P.*y.*t.*h.*o.*n.*')]\n"                         \
"\n"                                                                    \
"def gen_string_table(n):\n"                                            \
"    strings = []\n"                                                    \
"\n"                                                                    \
"    def append(s):\n"                                                  \
"        strings.append(s)\n"                                           \
"    append('-' * n + 'Perl' + '-' * n)\n"                              \
"    append('P' * n + 'Perl' + 'P' * n)\n"                              \
"    append('-' * n + 'Perl' + '-' * n)\n"                              \
"    append('-' * n + 'Perl' + '-' * n)\n"                              \
"    append('-' * n + 'Python' + '-' * n)\n"                            \
"    append('P' * n + 'Python' + 'P' * n)\n"                            \
"    append('-' * n + 'Python' + '-' * n)\n"                            \
"    append('-' * n + 'Python' + '-' * n)\n"                            \
"    append('-' * n + 'Python' + '-' * n)\n"                            \
"    append('-' * n + 'Python' + '-' * n)\n"                            \
"    append('-' * n + 'Perl' + '-' * n)\n"                              \
"    append('P' * n + 'Perl' + 'P' * n)\n"                              \
"    append('-' * n + 'Perl' + '-' * n)\n"                              \
"    append('-' * n + 'Perl' + '-' * n)\n"                              \
"    append('-' * n + 'PythonPython' + '-' * n)\n"                      \
"    append('P' * n + 'PythonPython' + 'P' * n)\n"                      \
"    append('-' * n + 'a5,b7,c9,' + '-' * n)\n"                         \
"    append('-' * n + 'a5,b7,c9,' + '-' * n)\n"                         \
"    append('-' * n + 'a5,b7,c9,' + '-' * n)\n"                         \
"    append('-' * n + 'a5,b7,c9,' + '-' * n)\n"                         \
"    append('-' * n + 'Python' + '-' * n)\n"                            \
"    return strings\n"                                                  \
"\n"                                                                    \
"\n"                                                                    \
"def init_benchmarks(n_values=None):\n"                                 \
"    if n_values is None:\n"                                            \
"        n_values = (0, 5)\n"                                           \
"\n"                                                                    \
"    string_tables = {n: gen_string_table(n) for n in n_values}\n"      \
"    regexs = gen_regex_table()\n"                                      \
"\n"                                                                    \
"    data = []\n"                                                       \
"    for n in n_values:\n"                                              \
"        for id in range(len(regexs)):\n"                               \
"            regex = regexs[id]\n"                                      \
"            string = string_tables[n][id]\n"                           \
"            data.append((regex, string))\n"                            \
"    return data\n"                                                     \
"\n"                                                                    \
"\n"                                                                    \
"def bench_regex_effbot(loops):\n"                                      \
"    data = init_benchmarks()\n"                                        \
"\n"                                                                    \
"    range_it = range(loops)\n"                                         \
"\n"                                                                    \
"    for _ in range_it:\n"                                              \
"        for regex, string in data:\n"                                  \
"            if regex.search(string) is None:\n"                        \
"                sys.exit(1)\n"                                         \
"            if regex.search(string) is None:\n"                        \
"                sys.exit(1)\n"                                         \
"            if regex.search(string) is None:\n"                        \
"                sys.exit(1)\n"                                         \
"            if regex.search(string) is None:\n"                        \
"                sys.exit(1)\n"                                         \
"            if regex.search(string) is None:\n"                        \
"                sys.exit(1)\n"                                         \
"            if regex.search(string) is None:\n"                        \
"                sys.exit(1)\n"                                         \
"            if regex.search(string) is None:\n"                        \
"                sys.exit(1)\n"                                         \
"            if regex.search(string) is None:\n"                        \
"                sys.exit(1)\n"                                         \
"            if regex.search(string) is None:\n"                        \
"                sys.exit(1)\n"                                         \
"            if regex.search(string) is None:\n"                        \
"                sys.exit(1)\n"                                         \
"\n"                                                                    \
"\n"                                                                    \
"LOOPS = 1\n"                                                          \
"bench_regex_effbot(LOOPS)\n"                                           \
"sys.exit(0)"

#elif SELECT_SCRIPT == 3

/* bm_fannkuch.py */
#define PYTHON_SCRIPT                                                   \
"import sys\n"                                                          \
"\n"                                                                    \
"\n"                                                                    \
"DEFAULT_ARG = 6\n"                                                     \
"\n"                                                                    \
"\n"                                                                    \
"def fannkuch(n):\n"                                                    \
"    count = list(range(1, n + 1))\n"                                   \
"    max_flips = 0\n"                                                   \
"    m = n - 1\n"                                                       \
"    r = n\n"                                                           \
"    check = 0\n"                                                       \
"    perm1 = list(range(n))\n"                                          \
"    perm = list(range(n))\n"                                           \
"    perm1_ins = perm1.insert\n"                                        \
"    perm1_pop = perm1.pop\n"                                           \
"\n"                                                                    \
"    while 1:\n"                                                        \
"        if check < 30:\n"                                              \
"            check += 1\n"                                              \
"\n"                                                                    \
"        while r != 1:\n"                                               \
"            count[r - 1] = r\n"                                        \
"            r -= 1\n"                                                  \
"\n"                                                                    \
"        if perm1[0] != 0 and perm1[m] != m:\n"                         \
"            perm = perm1[:]\n"                                         \
"            flips_count = 0\n"                                         \
"            k = perm[0]\n"                                             \
"            while k:\n"                                                \
"                perm[:k + 1] = perm[k::-1]\n"                          \
"                flips_count += 1\n"                                    \
"                k = perm[0]\n"                                         \
"\n"                                                                    \
"            if flips_count > max_flips:\n"                             \
"                max_flips = flips_count\n"                             \
"\n"                                                                    \
"        while r != n:\n"                                               \
"            perm1_ins(r, perm1_pop(0))\n"                              \
"            count[r] -= 1\n"                                           \
"            if count[r] > 0:\n"                                        \
"                break\n"                                               \
"            r += 1\n"                                                  \
"        else:\n"                                                       \
"            return max_flips\n"                                        \
"\n"                                                                    \
"\n"                                                                    \
"fannkuch(DEFAULT_ARG)\n"                                               \
"sys.exit(0)"

#elif SELECT_SCRIPT == 4

/* bm_json_loads.py */
#define PYTHON_SCRIPT                                                   \
"import ujson as json\n"                                                \
"import sys\n"                                                          \
"\n"                                                                    \
"\n"                                                                    \
"DICT = {\n"                                                            \
"    'ads_flags': 0,\n"                                                 \
"    'age': 18,\n"                                                      \
"    'bulletin_count': 0,\n"                                            \
"    'comment_count': 0,\n"                                             \
"    'country': 'BR',\n"                                                \
"    'encrypted_id': 'G9urXXAJwjE',\n"                                  \
"    'favorite_count': 9,\n"                                            \
"    'first_name': '',\n"                                               \
"    'flags': 412317970704,\n"                                          \
"    'friend_count': 0,\n"                                              \
"    'gender': 'm',\n"                                                  \
"    'gender_for_display': 'Male',\n"                                   \
"    'id': 302935349,\n"                                                \
"    'is_custom_profile_icon': 0,\n"                                    \
"    'last_name': '',\n"                                                \
"    'locale_preference': 'pt_BR',\n"                                   \
"    'member': 0,\n"                                                    \
"    'tags': ['a', 'b', 'c', 'd', 'e', 'f', 'g'],\n"                    \
"    'profile_foo_id': 827119638,\n"                                    \
"    'secure_encrypted_id': 'Z_xxx2dYx3t4YAdnmfgyKw',\n"                \
"    'session_number': 2,\n"                                            \
"    'signup_id': '201-19225-223',\n"                                   \
"    'status': 'A',\n"                                                  \
"    'theme': 1,\n"                                                     \
"    'time_created': 1225237014,\n"                                     \
"    'time_updated': 1233134493,\n"                                     \
"    'unread_message_count': 0,\n"                                      \
"    'user_group': '0',\n"                                              \
"    'username': 'collinwinter',\n"                                     \
"    'play_count': 9,\n"                                                \
"    'view_count': 7,\n"                                                \
"    'zip': ''}\n"                                                      \
"\n"                                                                    \
"TUPLE = (\n"                                                           \
"    [265867233, 265868503, 265252341, 265243910, 265879514,\n"         \
"     266219766, 266021701, 265843726, 265592821, 265246784,\n"         \
"     265853180, 45526486, 265463699, 265848143, 265863062,\n"          \
"     265392591, 265877490, 265823665, 265828884, 265753032], 60)\n"    \
"\n"                                                                    \
"\n"                                                                    \
"def mutate_dict(orig_dict):\n"                                         \
"    new_dict = dict(orig_dict)\n"                                      \
"    index = 0\n"                                                       \
"    for key, value in new_dict.items():\n"                             \
"        if index % 2 == 0:\n"                                          \
"            index = index + 1\n"                                       \
"            new_dict[key] = 23985723485 + index\n"                     \
"        else:\n"                                                       \
"            index = index + 1\n"                                       \
"            continue\n"                                                \
"    return new_dict\n"                                                 \
"\n"                                                                    \
"\n"                                                                    \
"DICT_GROUP = [mutate_dict(DICT) for _ in range(3)]\n"                  \
"\n"                                                                    \
"\n"                                                                    \
"def bench_json_loads(objs):\n"                                         \
"    for obj in objs:\n"                                                \
"        json.loads(obj)\n"                                             \
"        json.loads(obj)\n"                                             \
"        json.loads(obj)\n"                                             \
"        json.loads(obj)\n"                                             \
"        json.loads(obj)\n"                                             \
"        json.loads(obj)\n"                                             \
"        json.loads(obj)\n"                                             \
"        json.loads(obj)\n"                                             \
"        json.loads(obj)\n"                                             \
"        json.loads(obj)\n"                                             \
"        json.loads(obj)\n"                                             \
"        json.loads(obj)\n"                                             \
"        json.loads(obj)\n"                                             \
"        json.loads(obj)\n"                                             \
"        json.loads(obj)\n"                                             \
"        json.loads(obj)\n"                                             \
"        json.loads(obj)\n"                                             \
"        json.loads(obj)\n"                                             \
"        json.loads(obj)\n"                                             \
"        json.loads(obj)\n"                                             \
"\n"                                                                    \
"\n"                                                                    \
"json_dict = json.dumps(DICT)\n"                                        \
"json_tuple = json.dumps(TUPLE)\n"                                      \
"json_dict_group = json.dumps(DICT_GROUP)\n"                            \
"objs = (json_dict, json_tuple, json_dict_group)\n"                     \
"bench_json_loads(objs)\n"                                              \
"sys.exit(0)"

#elif SELECT_SCRIPT == 5

/* bm_json_dumps.py */
#define PYTHON_SCRIPT                                                   \
"import ujson as json\n"                                                \
"import sys\n"                                                          \
"\n"                                                                    \
"EMPTY = ({}, 2000)\n"                                                  \
"SIMPLE_DATA = {'key1': 0, 'key2': True, 'key3': 'value',\n"            \
"               'key4': 'foo',\n"                                       \
"               'key5': 'string'}\n"                                    \
"SIMPLE = (SIMPLE_DATA, 1000)\n"                                        \
"NESTED_DATA = {'key1': 0, 'key2': SIMPLE[0], 'key3': 'value',\n"       \
"               'key4': SIMPLE[0],\n"                                   \
"               'key5': SIMPLE[0], 'key': 'hello world'}\n"             \
"NESTED = (NESTED_DATA, 100)\n"                                         \
"HUGE = ([NESTED[0]] * 100, 1)\n"                                       \
"\n"                                                                    \
"\n"                                                                    \
"def bench_json_dumps(data):\n"                                         \
"    for obj, count_it in data:\n"                                      \
"        for _ in count_it:\n"                                          \
"            s = json.dumps(obj)\n"                                     \
"\n"                                                                    \
"\n"                                                                    \
"def main():\n"                                                         \
"    cases = [EMPTY, SIMPLE, NESTED, HUGE]\n"                           \
"    data = []\n"                                                       \
"    for case in cases:\n"                                              \
"        obj, count = case\n"                                           \
"        data.append((obj, range(count)))\n"                            \
"\n"                                                                    \
"    bench_json_dumps(data)\n"                                          \
"\n"                                                                    \
"\n"                                                                    \
"main()\n"                                                              \
"sys.exit(0)"

#elif SELECT_SCRIPT == 6

/* bm_nqueens.py */
#define PYTHON_SCRIPT                                                   \
"import sys\n"                                                          \
"\n"                                                                    \
"\n"                                                                    \
"def permutations(iterable, r=None):\n"                                 \
"    pool = tuple(iterable)\n"                                          \
"    n = len(pool)\n"                                                   \
"    if r is None:\n"                                                   \
"        r = n\n"                                                       \
"    indices = list(range(n))\n"                                        \
"    cycles = list(range(n - r + 1, n + 1))[::-1]\n"                    \
"    yield tuple(pool[i] for i in indices[:r])\n"                       \
"    while n:\n"                                                        \
"        for i in reversed(range(r)):\n"                                \
"            cycles[i] -= 1\n"                                          \
"            if cycles[i] == 0:\n"                                      \
"                indices[i:] = indices[i + 1:] + indices[i:i + 1]\n"    \
"                cycles[i] = n - i\n"                                   \
"            else:\n"                                                   \
"                j = cycles[i]\n"                                       \
"                indices[i], indices[-j] = indices[-j], indices[i]\n"   \
"                yield tuple(pool[i] for i in indices[:r])\n"           \
"                break\n"                                               \
"        else:\n"                                                       \
"            return\n"                                                  \
"\n"                                                                    \
"\n"                                                                    \
"def n_queens(queen_count):\n"                                          \
"    cols = range(queen_count)\n"                                       \
"    for vec in permutations(cols):\n"                                  \
"        if (queen_count == len(set(vec[i] + i for i in cols))\n"       \
"                        == len(set(vec[i] - i for i in cols))):\n"     \
"            yield vec\n"                                               \
"\n"                                                                    \
"\n"                                                                    \
"def bench_n_queens(queen_count):\n"                                    \
"    list(n_queens(queen_count))\n"                                     \
"\n"                                                                    \
"\n"                                                                    \
"QUEEN_COUNT = 6\n"                                                     \
"bench_n_queens(QUEEN_COUNT)\n"                                         \
"sys.exit(0)"

#elif SELECT_SCRIPT == 7

/* bm_deltablue.py */
#define PYTHON_SCRIPT                                                   \
"import sys\n"                                                          \
"\n"                                                                    \
"\n"                                                                    \
"class OrderedCollection(list):\n"                                      \
"    pass\n"                                                            \
"\n"                                                                    \
"\n"                                                                    \
"class Strength:\n"                                                     \
"\n"                                                                    \
"    def __init__(self, strength, name):\n"                             \
"        self.strength = strength\n"                                    \
"        self.name = name\n"                                            \
"\n"                                                                    \
"    @classmethod\n"                                                    \
"    def stronger(cls, s1, s2):\n"                                      \
"        return s1.strength < s2.strength\n"                            \
"\n"                                                                    \
"    @classmethod\n"                                                    \
"    def weaker(cls, s1, s2):\n"                                        \
"        return s1.strength > s2.strength\n"                            \
"\n"                                                                    \
"    @classmethod\n"                                                    \
"    def weakest_of(cls, s1, s2):\n"                                    \
"        if cls.weaker(s1, s2):\n"                                      \
"            return s1\n"                                               \
"\n"                                                                    \
"        return s2\n"                                                   \
"\n"                                                                    \
"    @classmethod\n"                                                    \
"    def strongest(cls, s1, s2):\n"                                     \
"        if cls.stronger(s1, s2):\n"                                    \
"            return s1\n"                                               \
"\n"                                                                    \
"        return s2\n"                                                   \
"\n"                                                                    \
"    def next_weaker(self):\n"                                          \
"        strengths = {\n"                                               \
"            0: WEAKEST,\n"                                             \
"            1: WEAK_DEFAULT,\n"                                        \
"            2: NORMAL,\n"                                              \
"            3: STRONG_DEFAULT,\n"                                      \
"            4: PREFERRED,\n"                                           \
"            5: REQUIRED,\n"                                            \
"        }\n"                                                           \
"        return strengths[self.strength]\n"                             \
"\n"                                                                    \
"\n"                                                                    \
"REQUIRED = Strength(0, 'required')\n"                                  \
"STRONG_PREFERRED = Strength(1, 'strongPreferred')\n"                   \
"PREFERRED = Strength(2, 'preferred')\n"                                \
"STRONG_DEFAULT = Strength(3, 'strongDefault')\n"                       \
"NORMAL = Strength(4, 'normal')\n"                                      \
"WEAK_DEFAULT = Strength(5, 'weakDefault')\n"                           \
"WEAKEST = Strength(6, 'weakest')\n"                                    \
"\n"                                                                    \
"\n"                                                                    \
"class Constraint:\n"                                                   \
"\n"                                                                    \
"    def __init__(self, strength):\n"                                   \
"        self.strength = strength\n"                                    \
"\n"                                                                    \
"    def add_constraint(self):\n"                                       \
"        global planner\n"                                              \
"        self.add_to_graph()\n"                                         \
"        planner.incremental_add(self)\n"                               \
"\n"                                                                    \
"    def satisfy(self, mark):\n"                                        \
"        global planner\n"                                              \
"        self.choose_method(mark)\n"                                    \
"\n"                                                                    \
"        if not self.is_satisfied():\n"                                 \
"            if self.strength == REQUIRED:\n"                           \
"                print('Could not satisfy a required constraint!')\n"   \
"                sys.exit(1)\n"                                         \
"\n"                                                                    \
"            return None\n"                                             \
"\n"                                                                    \
"        self.mark_inputs(mark)\n"                                      \
"        out = self.output()\n"                                         \
"        overridden = out.determined_by\n"                              \
"\n"                                                                    \
"        if overridden is not None:\n"                                  \
"            overridden.mark_unsatisfied()\n"                           \
"\n"                                                                    \
"        out.determined_by = self\n"                                    \
"\n"                                                                    \
"        if not planner.add_propagate(self, mark):\n"                   \
"            print('Cycle encountered')\n"                              \
"            sys.exit(1)\n"                                             \
"\n"                                                                    \
"        out.mark = mark\n"                                             \
"        return overridden\n"                                           \
"\n"                                                                    \
"    def destroy_constraint(self):\n"                                   \
"        global planner\n"                                              \
"        if self.is_satisfied():\n"                                     \
"            planner.incremental_remove(self)\n"                        \
"        else:\n"                                                       \
"            self.remove_from_graph()\n"                                \
"\n"                                                                    \
"    def is_input(self):\n"                                             \
"        return False\n"                                                \
"\n"                                                                    \
"\n"                                                                    \
"class UrnaryConstraint(Constraint):\n"                                 \
"\n"                                                                    \
"    def __init__(self, v, strength):\n"                                \
"        self.strength = strength\n"                                    \
"        self.my_output = v\n"                                          \
"        self.satisfied = False\n"                                      \
"        self.add_constraint()\n"                                       \
"\n"                                                                    \
"    def add_to_graph(self):\n"                                         \
"        self.my_output.add_constraint(self)\n"                         \
"        self.satisfied = False\n"                                      \
"\n"                                                                    \
"    def choose_method(self, mark):\n"                                  \
"        if self.my_output.mark != mark and Strength.stronger(self.strength, self.my_output.walk_strength):\n" \
"            self.satisfied = True\n"                                   \
"        else:\n"                                                       \
"            self.satisfied = False\n"                                  \
"\n"                                                                    \
"    def is_satisfied(self):\n"                                         \
"        return self.satisfied\n"                                       \
"\n"                                                                    \
"    def mark_inputs(self, mark):\n"                                    \
"        pass\n"                                                        \
"\n"                                                                    \
"    def output(self):\n"                                               \
"        return self.my_output\n"                                       \
"\n"                                                                    \
"    def recalculate(self):\n"                                          \
"        self.my_output.walk_strength = self.strength\n"                \
"        self.my_output.stay = not self.is_input()\n"                   \
"\n"                                                                    \
"        if self.my_output.stay:\n"                                     \
"            self.execute()\n"                                          \
"\n"                                                                    \
"    def mark_unsatisfied(self):\n"                                     \
"        self.satisfied = False\n"                                      \
"\n"                                                                    \
"    def inputs_known(self, mark):\n"                                   \
"        return True\n"                                                 \
"\n"                                                                    \
"    def remove_from_graph(self):\n"                                    \
"        if self.my_output is not None:\n"                              \
"            self.my_output.remove_constraint(self)\n"                  \
"            self.satisfied = False\n"                                  \
"\n"                                                                    \
"\n"                                                                    \
"class StayConstraint(UrnaryConstraint):\n"                             \
"\n"                                                                    \
"    def __init__(self, v, string):\n"                                  \
"        self.strength = string\n"                                      \
"        self.my_output = v\n"                                          \
"        self.satisfied = False\n"                                      \
"        self.add_constraint()\n"                                       \
"\n"                                                                    \
"    def execute(self):\n"                                              \
"        pass\n"                                                        \
"\n"                                                                    \
"\n"                                                                    \
"class EditConstraint(UrnaryConstraint):\n"                             \
"\n"                                                                    \
"    def __init__(self, v, string):\n"                                  \
"        self.strength = string\n"                                      \
"        self.my_output = v\n"                                          \
"        self.satisfied = False\n"                                      \
"        self.add_constraint()\n"                                       \
"\n"                                                                    \
"    def is_input(self):\n"                                             \
"        return True\n"                                                 \
"\n"                                                                    \
"    def execute(self):\n"                                              \
"        pass\n"                                                        \
"\n"                                                                    \
"\n"                                                                    \
"class Direction(object):\n"                                            \
"    NONE = 0\n"                                                        \
"    FORWARD = 1\n"                                                     \
"    BACKWARD = -1\n"                                                   \
"\n"                                                                    \
"\n"                                                                    \
"class BinaryConstraint(Constraint):\n"                                 \
"\n"                                                                    \
"    def __init__(self, v1, v2, strength):\n"                           \
"        self.strength = strength\n"                                    \
"        self.v1 = v1\n"                                                \
"        self.v2 = v2\n"                                                \
"        self.direction = Direction.NONE\n"                             \
"        self.add_constraint()\n"                                       \
"\n"                                                                    \
"    def choose_method(self, mark):\n"                                  \
"        if self.v1.mark == mark:\n"                                    \
"            if self.v2.mark != mark and Strength.stronger(self.strength, self.v2.walk_strength):\n" \
"                self.direction = Direction.FORWARD\n"                  \
"            else:\n"                                                   \
"                self.direction = Direction.BACKWARD\n"                 \
"\n"                                                                    \
"        if self.v2.mark == mark:\n"                                    \
"            if self.v1.mark != mark and Strength.stronger(self.strength, self.v1.walk_strength):\n" \
"                self.direction = Direction.BACKWARD\n"                 \
"            else:\n"                                                   \
"                self.direction = Direction.NONE\n"                     \
"\n"                                                                    \
"        if Strength.weaker(self.v1.walk_strength, self.v2.walk_strength):\n" \
"            if Strength.stronger(self.strength, self.v1.walk_strength):\n" \
"                self.direction = Direction.BACKWARD\n"                 \
"            else:\n"                                                   \
"                self.direction = Direction.NONE\n"                     \
"        else:\n"                                                       \
"            if Strength.stronger(self.strength, self.v2.walk_strength):\n" \
"                self.direction = Direction.FORWARD\n"                  \
"            else:\n"                                                   \
"                self.direction = Direction.BACKWARD\n"                 \
"\n"                                                                    \
"    def add_to_graph(self):\n"                                         \
"        self.v1.add_constraint(self)\n"                                \
"        self.v2.add_constraint(self)\n"                                \
"        self.direction = Direction.NONE\n"                             \
"\n"                                                                    \
"    def is_satisfied(self):\n"                                         \
"        return self.direction != Direction.NONE\n"                     \
"\n"                                                                    \
"    def mark_inputs(self, mark):\n"                                    \
"        self.input().mark = mark\n"                                    \
"\n"                                                                    \
"    def input(self):\n"                                                \
"        if self.direction == Direction.FORWARD:\n"                     \
"            return self.v1\n"                                          \
"\n"                                                                    \
"        return self.v2\n"                                              \
"\n"                                                                    \
"    def output(self):\n"                                               \
"        if self.direction == Direction.FORWARD:\n"                     \
"            return self.v2\n"                                          \
"\n"                                                                    \
"        return self.v1\n"                                              \
"\n"                                                                    \
"    def recalculate(self):\n"                                          \
"        ihn = self.input()\n"                                          \
"        out = self.output()\n"                                         \
"        out.walk_strength = Strength.weakest_of(\n"                    \
"            self.strength, ihn.walk_strength)\n"                       \
"        out.stay = ihn.stay\n"                                         \
"\n"                                                                    \
"        if out.stay:\n"                                                \
"            self.execute()\n"                                          \
"\n"                                                                    \
"    def mark_unsatisfied(self):\n"                                     \
"        self.direction = Direction.NONE\n"                             \
"\n"                                                                    \
"    def inputs_known(self, mark):\n"                                   \
"        i = self.input()\n"                                            \
"        return i.mark == mark or i.stay or i.determined_by is None\n"  \
"\n"                                                                    \
"    def remove_from_graph(self):\n"                                    \
"        if self.v1 is not None:\n"                                     \
"            self.v1.remove_constraint(self)\n"                         \
"\n"                                                                    \
"        if self.v2 is not None:\n"                                     \
"            self.v2.remove_constraint(self)\n"                         \
"\n"                                                                    \
"        self.direction = Direction.NONE\n"                             \
"\n"                                                                    \
"\n"                                                                    \
"class ScaleConstraint(BinaryConstraint):\n"                            \
"\n"                                                                    \
"    def __init__(self, src, scale, offset, dest, strength):\n"         \
"        self.direction = Direction.NONE\n"                             \
"        self.scale = scale\n"                                          \
"        self.offset = offset\n"                                        \
"        self.strength = strength\n"                                    \
"        self.v1 = src\n"                                               \
"        self.v2 = dest\n"                                              \
"        self.direction = Direction.NONE\n"                             \
"        self.add_constraint()\n"                                       \
"\n"                                                                    \
"    def add_to_graph(self):\n"                                         \
"        self.v1.add_constraint(self)\n"                                \
"        self.v2.add_constraint(self)\n"                                \
"        self.direction = Direction.NONE\n"                             \
"        self.scale.add_constraint(self)\n"                             \
"        self.offset.add_constraint(self)\n"                            \
"\n"                                                                    \
"    def remove_from_graph(self):\n"                                    \
"        if self.v1 is not None:\n"                                     \
"            self.v1.remove_constraint(self)\n"                         \
"\n"                                                                    \
"        if self.v2 is not None:\n"                                     \
"            self.v2.remove_constraint(self)\n"                         \
"\n"                                                                    \
"        self.direction = Direction.NONE\n"                             \
"\n"                                                                    \
"        if self.scale is not None:\n"                                  \
"            self.scale.remove_constraint(self)\n"                      \
"\n"                                                                    \
"        if self.offset is not None:\n"                                 \
"            self.offset.remove_constraint(self)\n"                     \
"\n"                                                                    \
"    def mark_inputs(self, mark):\n"                                    \
"        self.input().mark = mark\n"                                    \
"\n"                                                                    \
"        self.scale.mark = mark\n"                                      \
"        self.offset.mark = mark\n"                                     \
"\n"                                                                    \
"    def execute(self):\n"                                              \
"        if self.direction == Direction.FORWARD:\n"                     \
"            self.v2.value = self.v1.value * self.scale.value + self.offset.value\n" \
"        else:\n"                                                       \
"            self.v1.value = (self.v2.value - self.offset.value) / self.scale.value\n" \
"\n"                                                                    \
"    def recalculate(self):\n"                                          \
"        ihn = self.input()\n"                                          \
"        out = self.output()\n"                                         \
"        out.walk_strength = Strength.weakest_of(self.strength, ihn.walk_strength)\n" \
"        out.stay = ihn.stay and self.scale.stay and self.offset.stay\n" \
"\n"                                                                    \
"        if out.stay:\n"                                                \
"            self.execute()\n"                                          \
"\n"                                                                    \
"\n"                                                                    \
"class EqualityConstraint(BinaryConstraint):\n"                         \
"\n"                                                                    \
"    def execute(self):\n"                                              \
"        self.output().value = self.input().value\n"                    \
"\n"                                                                    \
"\n"                                                                    \
"class Variable:\n"                                                     \
"\n"                                                                    \
"    def __init__(self, name, initial_value=0):\n"                      \
"        self.name = name\n"                                            \
"        self.value = initial_value\n"                                  \
"        self.constraints = OrderedCollection()\n"                      \
"        self.determined_by = None\n"                                   \
"        self.mark = 0\n"                                               \
"        self.walk_strength = WEAKEST\n"                                \
"        self.stay = True\n"                                            \
"\n"                                                                    \
"    def __repr__(self):\n"                                             \
"        return '<Variable: %s - %s>' % (self.name, self.value)\n"      \
"\n"                                                                    \
"    def add_constraint(self, constraint):\n"                           \
"        self.constraints.append(constraint)\n"                         \
"\n"                                                                    \
"    def remove_constraint(self, constraint):\n"                        \
"        self.constraints.remove(constraint)\n"                         \
"\n"                                                                    \
"        if self.determined_by == constraint:\n"                        \
"            self.determined_by = None\n"                               \
"\n"                                                                    \
"\n"                                                                    \
"class Planner:\n"                                                      \
"\n"                                                                    \
"    def __init__(self):\n"                                             \
"        self.current_mark = 0\n"                                       \
"\n"                                                                    \
"    def incremental_add(self, constraint):\n"                          \
"        mark = self.new_mark()\n"                                      \
"        overridden = constraint.satisfy(mark)\n"                       \
"\n"                                                                    \
"        while overridden is not None:\n"                               \
"            overridden = overridden.satisfy(mark)\n"                   \
"\n"                                                                    \
"    def incremental_remove(self, constraint):\n"                       \
"        out = constraint.output()\n"                                   \
"        constraint.mark_unsatisfied()\n"                               \
"        constraint.remove_from_graph()\n"                              \
"        unsatisfied = self.remove_propagate_from(out)\n"               \
"        strength = REQUIRED\n"                                         \
"        repeat = True\n"                                               \
"\n"                                                                    \
"        while repeat:\n"                                               \
"            for u in unsatisfied:\n"                                   \
"                if u.strength == strength:\n"                          \
"                    self.incremental_add(u)\n"                         \
"\n"                                                                    \
"                strength = strength.next_weaker()\n"                   \
"\n"                                                                    \
"            repeat = strength != WEAKEST\n"                            \
"\n"                                                                    \
"    def new_mark(self):\n"                                             \
"        self.current_mark += 1\n"                                      \
"        return self.current_mark\n"                                    \
"\n"                                                                    \
"    def make_plan(self, sources):\n"                                   \
"        mark = self.new_mark()\n"                                      \
"        plan = Plan()\n"                                               \
"        todo = sources\n"                                              \
"\n"                                                                    \
"        while len(todo):\n"                                            \
"            c = todo.pop(0)\n"                                         \
"\n"                                                                    \
"            if c.output().mark != mark and c.inputs_known(mark):\n"    \
"                plan.add_constraint(c)\n"                              \
"                c.output().mark = mark\n"                              \
"                self.add_constraints_consuming_to(c.output(), todo)\n" \
"\n"                                                                    \
"        return plan\n"                                                 \
"\n"                                                                    \
"    def extract_plan_from_constraints(self, constraints):\n"           \
"        sources = OrderedCollection()\n"                               \
"\n"                                                                    \
"        for c in constraints:\n"                                       \
"            if c.is_input() and c.is_satisfied():\n"                   \
"                sources.append(c)\n"                                   \
"\n"                                                                    \
"        return self.make_plan(sources)\n"                              \
"\n"                                                                    \
"    def add_propagate(self, c, mark):\n"                               \
"        todo = OrderedCollection()\n"                                  \
"        todo.append(c)\n"                                              \
"\n"                                                                    \
"        while len(todo):\n"                                            \
"            d = todo.pop(0)\n"                                         \
"\n"                                                                    \
"            if d.output().mark == mark:\n"                             \
"                self.incremental_remove(c)\n"                          \
"                return False\n"                                        \
"\n"                                                                    \
"            d.recalculate()\n"                                         \
"            self.add_constraints_consuming_to(d.output(), todo)\n"     \
"\n"                                                                    \
"        return True\n"                                                 \
"\n"                                                                    \
"    def remove_propagate_from(self, out):\n"                           \
"        out.determined_by = None\n"                                    \
"        out.walk_strength = WEAKEST\n"                                 \
"        out.stay = True\n"                                             \
"        unsatisfied = OrderedCollection()\n"                           \
"        todo = OrderedCollection()\n"                                  \
"        todo.append(out)\n"                                            \
"\n"                                                                    \
"        while len(todo):\n"                                            \
"            v = todo.pop(0)\n"                                         \
"\n"                                                                    \
"            for c in v.constraints:\n"                                 \
"                if not c.is_satisfied():\n"                            \
"                    unsatisfied.append(c)\n"                           \
"\n"                                                                    \
"            determining = v.determined_by\n"                           \
"\n"                                                                    \
"            for c in v.constraints:\n"                                 \
"                if c != determining and c.is_satisfied():\n"           \
"                    c.recalculate()\n"                                 \
"                    todo.append(c.output())\n"                         \
"\n"                                                                    \
"        return unsatisfied\n"                                          \
"\n"                                                                    \
"    def add_constraints_consuming_to(self, v, coll):\n"                \
"        determining = v.determined_by\n"                               \
"        cc = v.constraints\n"                                          \
"\n"                                                                    \
"        for c in cc:\n"                                                \
"            if c != determining and c.is_satisfied():\n"               \
"                coll.append(c)\n"                                      \
"\n"                                                                    \
"\n"                                                                    \
"class Plan:\n"                                                         \
"\n"                                                                    \
"    def __init__(self):\n"                                             \
"        self.v = OrderedCollection()\n"                                \
"\n"                                                                    \
"    def add_constraint(self, c):\n"                                    \
"        self.v.append(c)\n"                                            \
"\n"                                                                    \
"    def __len__(self):\n"                                              \
"        return len(self.v)\n"                                          \
"\n"                                                                    \
"    def __getitem__(self, index):\n"                                   \
"        return self.v[index]\n"                                        \
"\n"                                                                    \
"    def execute(self):\n"                                              \
"        for c in self.v:\n"                                            \
"            c.execute()\n"                                             \
"\n"                                                                    \
"\n"                                                                    \
"def chain_test(n):\n"                                                  \
"    global planner\n"                                                  \
"    planner = Planner()\n"                                             \
"    prev, first, last = None, None, None\n"                            \
"\n"                                                                    \
"    for i in range(n + 1):\n"                                          \
"        name = 'v%s' % i\n"                                            \
"        v = Variable(name)\n"                                          \
"\n"                                                                    \
"        if prev is not None:\n"                                        \
"            EqualityConstraint(prev, v, REQUIRED)\n"                   \
"\n"                                                                    \
"        if i == 0:\n"                                                  \
"            first = v\n"                                               \
"\n"                                                                    \
"        if i == n:\n"                                                  \
"            last = v\n"                                                \
"\n"                                                                    \
"        prev = v\n"                                                    \
"\n"                                                                    \
"    StayConstraint(last, STRONG_DEFAULT)\n"                            \
"    edit = EditConstraint(first, PREFERRED)\n"                         \
"    edits = OrderedCollection()\n"                                     \
"    edits.append(edit)\n"                                              \
"    plan = planner.extract_plan_from_constraints(edits)\n"             \
"\n"                                                                    \
"    for i in range(100):\n"                                            \
"        first.value = i\n"                                             \
"        plan.execute()\n"                                              \
"\n"                                                                    \
"        if last.value != i:\n"                                         \
"            print('Chain test failed.')\n"                             \
"            sys.exit(1)\n"                                             \
"\n"                                                                    \
"\n"                                                                    \
"def projection_test(n):\n"                                             \
"    global planner\n"                                                  \
"    planner = Planner()\n"                                             \
"    scale = Variable('scale', 10)\n"                                   \
"    offset = Variable('offset', 1000)\n"                               \
"    src = None\n"                                                      \
"\n"                                                                    \
"    dests = OrderedCollection()\n"                                     \
"\n"                                                                    \
"    for i in range(n):\n"                                              \
"        src = Variable('src%s' % i, i)\n"                              \
"        dst = Variable('dst%s' % i, i)\n"                              \
"        dests.append(dst)\n"                                           \
"        StayConstraint(src, NORMAL)\n"                                 \
"        ScaleConstraint(src, scale, offset, dst, REQUIRED)\n"          \
"\n"                                                                    \
"    change(src, 17)\n"                                                 \
"\n"                                                                    \
"    if dst.value != 1170:\n"                                           \
"        print('Projection 1 failed')\n"                                \
"        sys.exit(1)\n"                                                 \
"\n"                                                                    \
"    change(dst, 1050)\n"                                               \
"\n"                                                                    \
"    if src.value != 5:\n"                                              \
"        print('Projection 2 failed')\n"                                \
"        sys.exit(1)\n"                                                 \
"\n"                                                                    \
"    change(scale, 5)\n"                                                \
"\n"                                                                    \
"    for i in range(n - 1):\n"                                          \
"        if dests[i].value != (i * 5 + 1000):\n"                        \
"            print('Projection 3 failed')\n"                            \
"            sys.exit(1)\n"                                             \
"\n"                                                                    \
"    change(offset, 2000)\n"                                            \
"\n"                                                                    \
"    for i in range(n - 1):\n"                                          \
"        if dests[i].value != (i * 5 + 2000):\n"                        \
"            print('Projection 4 failed')\n"                            \
"            sys.exit(1)\n"                                             \
"\n"                                                                    \
"\n"                                                                    \
"def change(v, new_value):\n"                                           \
"    global planner\n"                                                  \
"    edit = EditConstraint(v, PREFERRED)\n"                             \
"    edits = OrderedCollection()\n"                                     \
"    edits.append(edit)\n"                                              \
"\n"                                                                    \
"    plan = planner.extract_plan_from_constraints(edits)\n"             \
"\n"                                                                    \
"    for i in range(10):\n"                                             \
"        v.value = new_value\n"                                         \
"        plan.execute()\n"                                              \
"\n"                                                                    \
"    edit.destroy_constraint()\n"                                       \
"\n"                                                                    \
"\n"                                                                    \
"planner = None\n"                                                      \
"\n"                                                                    \
"\n"                                                                    \
"def delta_blue(n):\n"                                                  \
"    chain_test(n)\n"                                                   \
"    projection_test(n)\n"                                              \
"\n"                                                                    \
"\n"                                                                    \
"N = 75\n"                                                              \
"delta_blue(N)\n"                                                       \
"sys.exit(0)"

#elif SELECT_SCRIPT == 8

/* bm_meteor_contest.py */
#define PYTHON_SCRIPT                                                   \
"import sys\n"                                                          \
"\n"                                                                    \
"\n"                                                                    \
"SOLVE_ARG = 5\n"                                                       \
"LOOPS = 1\n"                                                           \
"\n"                                                                    \
"WIDTH, HEIGHT = 5, 10\n"                                               \
"DIR_NO = 6\n"                                                          \
"S, E = WIDTH * HEIGHT, 2\n"                                            \
"SE = S + (E / 2)\n"                                                    \
"SW = SE - E\n"                                                         \
"W, NW, NE = -E, -SE, -SW\n"                                            \
"\n"                                                                    \
"SOLUTIONS = [\n"                                                       \
"    '00001222012661126155865558633348893448934747977799',\n"           \
"    '00001222012771127148774485464855968596835966399333',\n"           \
"    '00001222012771127148774485494855998596835966366333',\n"           \
"    '33366366953869589955849458447784172117721022210000',\n"           \
"    '33399366953869586955846458447784172117721022210000',\n"           \
"    '99777974743984439884333685556855162116621022210000']\n"           \
"\n"                                                                    \
"\n"                                                                    \
"def rotate(ido, rd={E: NE, NE: NW, NW: W, W: SW, SW: SE, SE: E}):\n"   \
"    return [rd[o] for o in ido]\n"                                     \
"\n"                                                                    \
"\n"                                                                    \
"def flip(ido, fd={E: E, NE: SE, NW: SW, W: W, SW: NW, SE: NE}):\n"     \
"    return [fd[o] for o in ido]\n"                                     \
"\n"                                                                    \
"\n"                                                                    \
"def permute(ido, r_ido, rotate=rotate, flip=flip):\n"                  \
"    ps = [ido]\n"                                                      \
"    for r in range(DIR_NO - 1):\n"                                     \
"        ps.append(rotate(ps[-1]))\n"                                   \
"        if ido == r_ido:\n"                                            \
"            ps = ps[0:DIR_NO // 2]\n"                                  \
"    for pp in ps[:]:\n"                                                \
"        ps.append(flip(pp))\n"                                         \
"    return ps\n"                                                       \
"\n"                                                                    \
"\n"                                                                    \
"def convert(ido):\n"                                                   \
"    out = [0]\n"                                                       \
"    for o in ido:\n"                                                   \
"        out.append(out[-1] + o)\n"                                     \
"    return list(set(out))\n"                                           \
"\n"                                                                    \
"\n"                                                                    \
"def get_footprints(board, cti, pieces):\n"                             \
"    fps = [[[] for p in range(len(pieces))] for ci in range(len(board))]\n" \
"    for c in board:\n"                                                 \
"        for pi, p in enumerate(pieces):\n"                             \
"            for pp in p:\n"                                            \
"                fp = frozenset([cti[c + o] for o in pp if (c + o) in cti])\n" \
"                if len(fp) == 5:\n"                                    \
"                    fps[min(fp)][pi].append(fp)\n"                     \
"    return fps\n"                                                      \
"\n"                                                                    \
"\n"                                                                    \
"def get_senh(board, cti):\n"                                           \
"    se_nh = []\n"                                                      \
"    nh = [E, SW, SE]\n"                                                \
"    for c in board:\n"                                                 \
"        se_nh.append(frozenset([cti[c + o] for o in nh if (c + o) in cti]))\n" \
"    return se_nh\n"                                                    \
"\n"                                                                    \
"\n"                                                                    \
"def get_puzzle(width, height):\n"                                      \
"    board = [E * x + S * y + (y % 2)\n"                                \
"             for y in range(height)\n"                                 \
"             for x in range(width)]\n"                                 \
"    cti = dict((board[i], i) for i in range(len(board)))\n"            \
"\n"                                                                    \
"    idos = [[E, E, E, SE],\n"                                          \
"            [SE, SW, W, SW],\n"                                        \
"            [W, W, SW, SE],\n"                                         \
"            [E, E, SW, SE],\n"                                         \
"            [NW, W, NW, SE, SW],\n"                                    \
"            [E, E, NE, W],\n"                                          \
"            [NW, NE, NE, W],\n"                                        \
"            [NE, SE, E, NE],\n"                                        \
"            [SE, SE, E, SE],\n"                                        \
"            [E, NW, NW, NW]]\n"                                        \
"\n"                                                                    \
"    perms = (permute(p, idos[3]) for p in idos)\n"                     \
"    pieces = [[convert(pp) for pp in p] for p in perms]\n"             \
"    return (board, cti, pieces)\n"                                     \
"\n"                                                                    \
"\n"                                                                    \
"def bisect(array, item):\n"                                            \
"    for i, a in enumerate(array):\n"                                   \
"        if item < a:\n"                                                \
"            return i\n"                                                \
"    return len(array)\n"                                               \
"\n"                                                                    \
"\n"                                                                    \
"def solve(n, i_min, free, curr_board, pieces_left, solutions, fps, se_nh):\n" \
"\n"                                                                    \
"    fp_i_cands = fps[i_min]\n"                                         \
"    for p in pieces_left:\n"                                           \
"        fp_cands = fp_i_cands[p]\n"                                    \
"        for fp in fp_cands:\n"                                         \
"            if fp <= free:\n"                                          \
"                n_curr_board = curr_board[:]\n"                        \
"                for ci in fp:\n"                                       \
"                    n_curr_board[ci] = p\n"                            \
"\n"                                                                    \
"                if len(pieces_left) > 1:\n"                            \
"                    n_free = free - fp\n"                              \
"                    n_i_min = min(n_free)\n"                           \
"                    if len(n_free & se_nh[n_i_min]) > 0:\n"            \
"                        n_pieces_left = pieces_left[:]\n"              \
"                        n_pieces_left.remove(p)\n"                     \
"                        solve(n, n_i_min, n_free, n_curr_board,\n"     \
"                              n_pieces_left, solutions, fps, se_nh)\n" \
"                else:\n"                                               \
"                    s = ''.join(map(str, n_curr_board))\n"             \
"                    solutions.insert(bisect(solutions, s), s)\n"       \
"                    rs = ''.join(reversed(s))\n"                       \
"                    solutions.insert(bisect(solutions, rs), rs)\n"     \
"                    if len(solutions) >= n:\n"                         \
"                        return\n"                                      \
"\n"                                                                    \
"        if len(solutions) >= n:\n"                                     \
"            return\n"                                                  \
"\n"                                                                    \
"\n"                                                                    \
"def bench_meteor_contest(loops, board, pieces, solve_arg, fps, se_nh):\n" \
"    range_it = range(loops)\n"                                         \
"\n"                                                                    \
"    for _ in range_it:\n"                                              \
"        free = frozenset(range(len(board)))\n"                         \
"        curr_board = [-1] * len(board)\n"                              \
"        pieces_left = list(range(len(pieces)))\n"                      \
"        solutions = []\n"                                              \
"        solve(solve_arg, 0, free, curr_board, pieces_left,\n"          \
"              solutions, fps, se_nh)\n"                                \
"\n"                                                                    \
"    if solutions != SOLUTIONS:\n"                                      \
"        raise ValueError(\"unexpected solutions\")\n"                  \
"\n"                                                                    \
"\n"                                                                    \
"def main():\n"                                                         \
"    board, cti, pieces = get_puzzle(WIDTH, HEIGHT)\n"                  \
"    fps = get_footprints(board, cti, pieces)\n"                        \
"    se_nh = get_senh(board, cti)\n"                                    \
"\n"                                                                    \
"    solve_arg = SOLVE_ARG\n"                                           \
"    bench_meteor_contest(LOOPS, board, pieces, solve_arg, fps, se_nh)\n" \
"\n"                                                                    \
"\n"                                                                    \
"main()\n"                                                              \
"sys.exit(0)"

#elif SELECT_SCRIPT == 9

/* bm_hexiom.py */
#define PYTHON_SCRIPT                                                   \
"import sys\n"                                                          \
"\n"                                                                    \
"\n"                                                                    \
"DEFAULT_LEVEL = 25\n"                                                  \
"LOOPS = 1\n"                                                           \
"\n"                                                                    \
"\n"                                                                    \
"class Dir(object):\n"                                                  \
"\n"                                                                    \
"    def __init__(self, x, y):\n"                                       \
"        self.x = x\n"                                                  \
"        self.y = y\n"                                                  \
"\n"                                                                    \
"\n"                                                                    \
"DIRS = [Dir(1, 0),\n"                                                  \
"        Dir(-1, 0),\n"                                                 \
"        Dir(0, 1),\n"                                                  \
"        Dir(0, -1),\n"                                                 \
"        Dir(1, 1),\n"                                                  \
"        Dir(-1, -1)]\n"                                                \
"\n"                                                                    \
"EMPTY = 7\n"                                                           \
"\n"                                                                    \
"\n"                                                                    \
"class Done(object):\n"                                                 \
"    MIN_CHOICE_STRATEGY = 0\n"                                         \
"    MAX_CHOICE_STRATEGY = 1\n"                                         \
"    HIGHEST_VALUE_STRATEGY = 2\n"                                      \
"    FIRST_STRATEGY = 3\n"                                              \
"    MAX_NEIGHBORS_STRATEGY = 4\n"                                      \
"    MIN_NEIGHBORS_STRATEGY = 5\n"                                      \
"\n"                                                                    \
"    def __init__(self, count, empty=False):\n"                         \
"        self.count = count\n"                                          \
"        self.cells = None if empty else [\n"                           \
"            [0, 1, 2, 3, 4, 5, 6, EMPTY] for i in range(count)]\n"     \
"\n"                                                                    \
"    def clone(self):\n"                                                \
"        ret = Done(self.count, True)\n"                                \
"        ret.cells = [self.cells[i][:] for i in range(self.count)]\n"   \
"        return ret\n"                                                  \
"\n"                                                                    \
"    def __getitem__(self, i):\n"                                       \
"        return self.cells[i]\n"                                        \
"\n"                                                                    \
"    def set_done(self, i, v):\n"                                       \
"        self.cells[i] = [v]\n"                                         \
"\n"                                                                    \
"    def already_done(self, i):\n"                                      \
"        return len(self.cells[i]) == 1\n"                              \
"\n"                                                                    \
"    def remove(self, i, v):\n"                                         \
"        if v in self.cells[i]:\n"                                      \
"            self.cells[i].remove(v)\n"                                 \
"            return True\n"                                             \
"        else:\n"                                                       \
"            return False\n"                                            \
"\n"                                                                    \
"    def remove_all(self, v):\n"                                        \
"        for i in range(self.count):\n"                                 \
"            self.remove(i, v)\n"                                       \
"\n"                                                                    \
"    def remove_unfixed(self, v):\n"                                    \
"        changed = False\n"                                             \
"        for i in range(self.count):\n"                                 \
"            if not self.already_done(i):\n"                            \
"                if self.remove(i, v):\n"                               \
"                    changed = True\n"                                  \
"        return changed\n"                                              \
"\n"                                                                    \
"    def filter_tiles(self, tiles):\n"                                  \
"        for v in range(8):\n"                                          \
"            if tiles[v] == 0:\n"                                       \
"                self.remove_all(v)\n"                                  \
"\n"                                                                    \
"    def next_cell_min_choice(self):\n"                                 \
"        minlen = 10\n"                                                 \
"        mini = -1\n"                                                   \
"        for i in range(self.count):\n"                                 \
"            if 1 < len(self.cells[i]) < minlen:\n"                     \
"                minlen = len(self.cells[i])\n"                         \
"                mini = i\n"                                            \
"        return mini\n"                                                 \
"\n"                                                                    \
"    def next_cell_max_choice(self):\n"                                 \
"        maxlen = 1\n"                                                  \
"        maxi = -1\n"                                                   \
"        for i in range(self.count):\n"                                 \
"            if maxlen < len(self.cells[i]):\n"                         \
"                maxlen = len(self.cells[i])\n"                         \
"                maxi = i\n"                                            \
"        return maxi\n"                                                 \
"\n"                                                                    \
"    def next_cell_highest_value(self):\n"                              \
"        maxval = -1\n"                                                 \
"        maxi = -1\n"                                                   \
"        for i in range(self.count):\n"                                 \
"            if (not self.already_done(i)):\n"                          \
"                maxvali = max(k for k in self.cells[i] if k != EMPTY)\n" \
"                if maxval < maxvali:\n"                                \
"                    maxval = maxvali\n"                                \
"                    maxi = i\n"                                        \
"        return maxi\n"                                                 \
"\n"                                                                    \
"    def next_cell_first(self):\n"                                      \
"        for i in range(self.count):\n"                                 \
"            if (not self.already_done(i)):\n"                          \
"                return i\n"                                            \
"        return -1\n"                                                   \
"\n"                                                                    \
"    def next_cell_max_neighbors(self, pos):\n"                         \
"        maxn = -1\n"                                                   \
"        maxi = -1\n"                                                   \
"        for i in range(self.count):\n"                                 \
"            if not self.already_done(i):\n"                            \
"                cells_around = pos.hex.get_by_id(i).links\n"           \
"                n = sum(1 if (self.already_done(nid) and (self[nid][0] != EMPTY)) else 0\n" \
"                        for nid in cells_around)\n"                    \
"                if n > maxn:\n"                                        \
"                    maxn = n\n"                                        \
"                    maxi = i\n"                                        \
"        return maxi\n"                                                 \
"\n"                                                                    \
"    def next_cell_min_neighbors(self, pos):\n"                         \
"        minn = 7\n"                                                    \
"        mini = -1\n"                                                   \
"        for i in range(self.count):\n"                                 \
"            if not self.already_done(i):\n"                            \
"                cells_around = pos.hex.get_by_id(i).links\n"           \
"                n = sum(1 if (self.already_done(nid) and (self[nid][0] != EMPTY)) else 0\n" \
"                        for nid in cells_around)\n"                    \
"                if n < minn:\n"                                        \
"                    minn = n\n"                                        \
"                    mini = i\n"                                        \
"        return mini\n"                                                 \
"\n"                                                                    \
"    def next_cell(self, pos, strategy=HIGHEST_VALUE_STRATEGY):\n"      \
"        if strategy == Done.HIGHEST_VALUE_STRATEGY:\n"                 \
"            return self.next_cell_highest_value()\n"                   \
"        elif strategy == Done.MIN_CHOICE_STRATEGY:\n"                  \
"            return self.next_cell_min_choice()\n"                      \
"        elif strategy == Done.MAX_CHOICE_STRATEGY:\n"                  \
"            return self.next_cell_max_choice()\n"                      \
"        elif strategy == Done.FIRST_STRATEGY:\n"                       \
"            return self.next_cell_first()\n"                           \
"        elif strategy == Done.MAX_NEIGHBORS_STRATEGY:\n"               \
"            return self.next_cell_max_neighbors(pos)\n"                \
"        elif strategy == Done.MIN_NEIGHBORS_STRATEGY:\n"               \
"            return self.next_cell_min_neighbors(pos)\n"                \
"        else:\n"                                                       \
"            raise Exception(\"Wrong strategy: %d\" % strategy)\n"      \
"\n"                                                                    \
"\n"                                                                    \
"class Node(object):\n"                                                 \
"\n"                                                                    \
"    def __init__(self, pos, id, links):\n"                             \
"        self.pos = pos\n"                                              \
"        self.id = id\n"                                                \
"        self.links = links\n"                                          \
"\n"                                                                    \
"\n"                                                                    \
"class Hex(object):\n"                                                  \
"\n"                                                                    \
"    def __init__(self, size):\n"                                       \
"        self.size = size\n"                                            \
"        self.count = 3 * size * (size - 1) + 1\n"                      \
"        self.nodes_by_id = self.count * [None]\n"                      \
"        self.nodes_by_pos = {}\n"                                      \
"        id = 0\n"                                                      \
"        for y in range(size):\n"                                       \
"            for x in range(size + y):\n"                               \
"                pos = (x, y)\n"                                        \
"                node = Node(pos, id, [])\n"                            \
"                self.nodes_by_pos[pos] = node\n"                       \
"                self.nodes_by_id[node.id] = node\n"                    \
"                id += 1\n"                                             \
"        for y in range(1, size):\n"                                    \
"            for x in range(y, size * 2 - 1):\n"                        \
"                ry = size + y - 1\n"                                   \
"                pos = (x, ry)\n"                                       \
"                node = Node(pos, id, [])\n"                            \
"                self.nodes_by_pos[pos] = node\n"                       \
"                self.nodes_by_id[node.id] = node\n"                    \
"                id += 1\n"                                             \
"\n"                                                                    \
"    def link_nodes(self):\n"                                           \
"        for node in self.nodes_by_id:\n"                               \
"            (x, y) = node.pos\n"                                       \
"            for dir in DIRS:\n"                                        \
"                nx = x + dir.x\n"                                      \
"                ny = y + dir.y\n"                                      \
"                if self.contains_pos((nx, ny)):\n"                     \
"                    node.links.append(self.nodes_by_pos[(nx, ny)].id)\n" \
"\n"                                                                    \
"    def contains_pos(self, pos):\n"                                    \
"        return pos in self.nodes_by_pos\n"                             \
"\n"                                                                    \
"    def get_by_pos(self, pos):\n"                                      \
"        return self.nodes_by_pos[pos]\n"                               \
"\n"                                                                    \
"    def get_by_id(self, id):\n"                                        \
"        return self.nodes_by_id[id]\n"                                 \
"\n"                                                                    \
"\n"                                                                    \
"class Pos(object):\n"                                                  \
"\n"                                                                    \
"    def __init__(self, hex, tiles, done=None):\n"                      \
"        self.hex = hex\n"                                              \
"        self.tiles = tiles\n"                                          \
"        self.done = Done(hex.count) if done is None else done\n"       \
"\n"                                                                    \
"    def clone(self):\n"                                                \
"        return Pos(self.hex, self.tiles, self.done.clone())\n"         \
"\n"                                                                    \
"\n"                                                                    \
"def constraint_pass(pos, last_move=None):\n"                           \
"    changed = False\n"                                                 \
"    left = pos.tiles[:]\n"                                             \
"    done = pos.done\n"                                                 \
"\n"                                                                    \
"    free_cells = (range(done.count) if last_move is None\n"            \
"                  else pos.hex.get_by_id(last_move).links)\n"          \
"    for i in free_cells:\n"                                            \
"        if not done.already_done(i):\n"                                \
"            vmax = 0\n"                                                \
"            vmin = 0\n"                                                \
"            cells_around = pos.hex.get_by_id(i).links\n"               \
"            for nid in cells_around:\n"                                \
"                if done.already_done(nid):\n"                          \
"                    if done[nid][0] != EMPTY:\n"                       \
"                        vmin += 1\n"                                   \
"                        vmax += 1\n"                                   \
"                else:\n"                                               \
"                    vmax += 1\n"                                       \
"\n"                                                                    \
"            for num in range(7):\n"                                    \
"                if (num < vmin) or (num > vmax):\n"                    \
"                    if done.remove(i, num):\n"                         \
"                        changed = True\n"                              \
"\n"                                                                    \
"    for cell in done.cells:\n"                                         \
"        if len(cell) == 1:\n"                                          \
"            left[cell[0]] -= 1\n"                                      \
"\n"                                                                    \
"    for v in range(8):\n"                                              \
"        if (pos.tiles[v] > 0) and (left[v] == 0):\n"                   \
"            if done.remove_unfixed(v):\n"                              \
"                changed = True\n"                                      \
"        else:\n"                                                       \
"            possible = sum((1 if v in cell else 0) for cell in done.cells)\n" \
"            if pos.tiles[v] == possible:\n"                            \
"                for i in range(done.count):\n"                         \
"                    cell = done.cells[i]\n"                            \
"                    if (not done.already_done(i)) and (v in cell):\n"  \
"                        done.set_done(i, v)\n"                         \
"                        changed = True\n"                              \
"\n"                                                                    \
"    filled_cells = (range(done.count) if last_move is None\n"          \
"                    else [last_move])\n"                               \
"    for i in filled_cells:\n"                                          \
"        if done.already_done(i):\n"                                    \
"            num = done[i][0]\n"                                        \
"            empties = 0\n"                                             \
"            filled = 0\n"                                              \
"            unknown = []\n"                                            \
"            cells_around = pos.hex.get_by_id(i).links\n"               \
"            for nid in cells_around:\n"                                \
"                if done.already_done(nid):\n"                          \
"                    if done[nid][0] == EMPTY:\n"                       \
"                        empties += 1\n"                                \
"                    else:\n"                                           \
"                        filled += 1\n"                                 \
"                else:\n"                                               \
"                    unknown.append(nid)\n"                             \
"            if len(unknown) > 0:\n"                                    \
"                if num == filled:\n"                                   \
"                    for u in unknown:\n"                               \
"                        if EMPTY in done[u]:\n"                        \
"                            done.set_done(u, EMPTY)\n"                 \
"                            changed = True\n"                          \
"                elif num == filled + len(unknown):\n"                  \
"                    for u in unknown:\n"                               \
"                        if done.remove(u, EMPTY):\n"                   \
"                            changed = True\n"                          \
"\n"                                                                    \
"    return changed\n"                                                  \
"\n"                                                                    \
"\n"                                                                    \
"ASCENDING = 1\n"                                                       \
"DESCENDING = -1\n"                                                     \
"\n"                                                                    \
"\n"                                                                    \
"def find_moves(pos, strategy, order):\n"                               \
"    done = pos.done\n"                                                 \
"    cell_id = done.next_cell(pos, strategy)\n"                         \
"    if cell_id < 0:\n"                                                 \
"        return []\n"                                                   \
"\n"                                                                    \
"    if order == ASCENDING:\n"                                          \
"        return [(cell_id, v) for v in done[cell_id]]\n"                \
"    else:\n"                                                           \
"        moves = list(reversed([(cell_id, v)\n"                         \
"                               for v in done[cell_id] if v != EMPTY]))\n" \
"        if EMPTY in done[cell_id]:\n"                                  \
"            moves.append((cell_id, EMPTY))\n"                          \
"        return moves\n"                                                \
"\n"                                                                    \
"\n"                                                                    \
"def play_move(pos, move):\n"                                           \
"    (cell_id, i) = move\n"                                             \
"    pos.done.set_done(cell_id, i)\n"                                   \
"\n"                                                                    \
"\n"                                                                    \
"def print_pos(pos, output):\n"                                         \
"    global result\n"                                                   \
"    string = ''\n"                                                     \
"    hex = pos.hex\n"                                                   \
"    done = pos.done\n"                                                 \
"    size = hex.size\n"                                                 \
"    for y in range(size):\n"                                           \
"        string += ' ' * (size - y - 1)\n"                              \
"        for x in range(size + y):\n"                                   \
"            pos2 = (x, y)\n"                                           \
"            id = hex.get_by_pos(pos2).id\n"                            \
"            if done.already_done(id):\n"                               \
"                c = done[id][0] if done[id][0] != EMPTY else '.'\n"    \
"            else:\n"                                                   \
"                c = '?'\n"                                             \
"            string += ('%s ' % c)\n"                                   \
"        result.append(string)\n"                                       \
"        string = ''\n"                                                 \
"    for y in range(1, size):\n"                                        \
"        string += ' ' * y\n"                                           \
"        for x in range(y, size * 2 - 1):\n"                            \
"            ry = size + y - 1\n"                                       \
"            pos2 = (x, ry)\n"                                          \
"            id = hex.get_by_pos(pos2).id\n"                            \
"            if done.already_done(id):\n"                               \
"                c = done[id][0] if done[id][0] != EMPTY else '.'\n"    \
"            else:\n"                                                   \
"                c = '?'\n"                                             \
"            string += '%s ' % c\n"                                     \
"        result.append(string)\n"                                       \
"        string = ''\n"                                                 \
"\n"                                                                    \
"\n"                                                                    \
"OPEN = 0\n"                                                            \
"SOLVED = 1\n"                                                          \
"IMPOSSIBLE = -1\n"                                                     \
"\n"                                                                    \
"\n"                                                                    \
"def solved(pos, output, verbose=False):\n"                             \
"    hex = pos.hex\n"                                                   \
"    tiles = pos.tiles[:]\n"                                            \
"    done = pos.done\n"                                                 \
"    exact = True\n"                                                    \
"    all_done = True\n"                                                 \
"    for i in range(hex.count):\n"                                      \
"        if len(done[i]) == 0:\n"                                       \
"            return IMPOSSIBLE\n"                                       \
"        elif done.already_done(i):\n"                                  \
"            num = done[i][0]\n"                                        \
"            tiles[num] -= 1\n"                                         \
"            if (tiles[num] < 0):\n"                                    \
"                return IMPOSSIBLE\n"                                   \
"            vmax = 0\n"                                                \
"            vmin = 0\n"                                                \
"            if num != EMPTY:\n"                                        \
"                cells_around = hex.get_by_id(i).links\n"               \
"                for nid in cells_around:\n"                            \
"                    if done.already_done(nid):\n"                      \
"                        if done[nid][0] != EMPTY:\n"                   \
"                            vmin += 1\n"                               \
"                            vmax += 1\n"                               \
"                    else:\n"                                           \
"                        vmax += 1\n"                                   \
"\n"                                                                    \
"                if (num < vmin) or (num > vmax):\n"                    \
"                    return IMPOSSIBLE\n"                               \
"                if num != vmin:\n"                                     \
"                    exact = False\n"                                   \
"        else:\n"                                                       \
"            all_done = False\n"                                        \
"\n"                                                                    \
"    if (not all_done) or (not exact):\n"                               \
"        return OPEN\n"                                                 \
"\n"                                                                    \
"    print_pos(pos, output)\n"                                          \
"    return SOLVED\n"                                                   \
"\n"                                                                    \
"\n"                                                                    \
"def solve_step(prev, strategy, order, output, first=False):\n"         \
"    if first:\n"                                                       \
"        pos = prev.clone()\n"                                          \
"        while constraint_pass(pos):\n"                                 \
"            pass\n"                                                    \
"    else:\n"                                                           \
"        pos = prev\n"                                                  \
"\n"                                                                    \
"    moves = find_moves(pos, strategy, order)\n"                        \
"    if len(moves) == 0:\n"                                             \
"        return solved(pos, output)\n"                                  \
"    else:\n"                                                           \
"        for move in moves:\n"                                          \
"            ret = OPEN\n"                                              \
"            new_pos = pos.clone()\n"                                   \
"            play_move(new_pos, move)\n"                                \
"            while constraint_pass(new_pos, move[0]):\n"                \
"                pass\n"                                                \
"            cur_status = solved(new_pos, output)\n"                    \
"            if cur_status != OPEN:\n"                                  \
"                ret = cur_status\n"                                    \
"            else:\n"                                                   \
"                ret = solve_step(new_pos, strategy, order, output)\n"  \
"            if ret == SOLVED:\n"                                       \
"                return SOLVED\n"                                       \
"    return IMPOSSIBLE\n"                                               \
"\n"                                                                    \
"\n"                                                                    \
"def check_valid(pos):\n"                                               \
"    hex = pos.hex\n"                                                   \
"    tiles = pos.tiles\n"                                               \
"    tot = 0\n"                                                         \
"    for i in range(8):\n"                                              \
"        if tiles[i] > 0:\n"                                            \
"            tot += tiles[i]\n"                                         \
"        else:\n"                                                       \
"            tiles[i] = 0\n"                                            \
"    if tot != hex.count:\n"                                            \
"        raise Exception(\n"                                            \
"            'Invalid input. Expected %d tiles, got %d.' % (hex.count, tot))\n" \
"\n"                                                                    \
"\n"                                                                    \
"def solve(pos, strategy, order, output):\n"                            \
"    check_valid(pos)\n"                                                \
"    return solve_step(pos, strategy, order, output, first=True)\n"     \
"\n"                                                                    \
"\n"                                                                    \
"def read_file(file):\n"                                                \
"    lines = file\n"                                                    \
"    size = int(lines[0])\n"                                            \
"    hex = Hex(size)\n"                                                 \
"    linei = 1\n"                                                       \
"    tiles = 8 * [0]\n"                                                 \
"    done = Done(hex.count)\n"                                          \
"    for y in range(size):\n"                                           \
"        line = lines[linei][size - y - 1:]\n"                          \
"        p = 0\n"                                                       \
"        for x in range(size + y):\n"                                   \
"            tile = line[p:p + 2]\n"                                    \
"            p += 2\n"                                                  \
"            if tile[1] == '.':\n"                                      \
"                inctile = EMPTY\n"                                     \
"            else:\n"                                                   \
"                inctile = int(tile)\n"                                 \
"            tiles[inctile] += 1\n"                                     \
"            if tile[0] == '+':\n"                                      \
"                done.set_done(hex.get_by_pos((x, y)).id, inctile)\n"   \
"\n"                                                                    \
"        linei += 1\n"                                                  \
"    for y in range(1, size):\n"                                        \
"        ry = size - 1 + y\n"                                           \
"        line = lines[linei][y:]\n"                                     \
"        p = 0\n"                                                       \
"        for x in range(y, size * 2 - 1):\n"                            \
"            tile = line[p:p + 2]\n"                                    \
"            p += 2\n"                                                  \
"            if tile[1] == '.':\n"                                      \
"                inctile = EMPTY\n"                                     \
"            else:\n"                                                   \
"                inctile = int(tile)\n"                                 \
"            tiles[inctile] += 1\n"                                     \
"            # Look for locked tiles\n"                                 \
"            if tile[0] == '+':\n"                                      \
"                done.set_done(hex.get_by_pos((x, ry)).id, inctile)\n"  \
"        linei += 1\n"                                                  \
"    hex.link_nodes()\n"                                                \
"    done.filter_tiles(tiles)\n"                                        \
"    return Pos(hex, tiles, done)\n"                                    \
"\n"                                                                    \
"\n"                                                                    \
"def solve_file(file, strategy, order, output):\n"                      \
"    pos = read_file(file)\n"                                           \
"    solve(pos, strategy, order, output)\n"                             \
"\n"                                                                    \
"\n"                                                                    \
"LEVELS = {}\n"                                                         \
"\n"                                                                    \
"LEVELS[2] = [\n"                                                       \
"['2',\n"                                                               \
"'  . 1',\n"                                                            \
"' . 1 1',\n"                                                           \
"'  1 .'],\n"                                                           \
"[' 1 1',\n"                                                            \
"'. . .',\n"                                                            \
"' 1 1']\n"                                                             \
"]\n"                                                                   \
"\n"                                                                    \
"LEVELS[10] = [\n"                                                      \
"['3',\n"                                                               \
"'  +.+. .',\n"                                                         \
"' +. 0 . 2',\n"                                                        \
"' . 1+2 1 .',\n"                                                       \
"'  2 . 0+.',\n"                                                        \
"'   .+.+.'],\n"                                                        \
"['  . . 1',\n"                                                         \
"' . 1 . 2',\n"                                                         \
"'0 . 2 2 .',\n"                                                        \
"' . . . .',\n"                                                         \
"'  0 . .']\n"                                                          \
"]\n"                                                                   \
"\n"                                                                    \
"LEVELS[20] = [\n"                                                      \
"['3',\n"                                                               \
"'   . 5 4',\n"                                                         \
"'  . 2+.+1',\n"                                                        \
"' . 3+2 3 .',\n"                                                       \
"' +2+. 5 .',\n"                                                        \
"'   . 3 .'],\n"                                                        \
"['  3 3 2',\n"                                                         \
"' 4 5 . 1',\n"                                                         \
"'3 5 2 . .',\n"                                                        \
"' 2 . . .',\n"                                                         \
"'  . . .']\n"                                                          \
"]\n"                                                                   \
"\n"                                                                    \
"LEVELS[25] = [\n"                                                      \
"['3',\n"                                                               \
"'   4 . .',\n"                                                         \
"'  . . 2 .',\n"                                                        \
"' 4 3 2 . 4',\n"                                                       \
"'  2 2 3 .',\n"                                                        \
"'   4 2 4'],\n"                                                        \
"['  3 4 2',\n"                                                         \
"' 2 4 4 .',\n"                                                         \
"'. . . 4 2',\n"                                                        \
"' . 2 4 3',\n"                                                         \
"'  . 2 .']\n"                                                          \
"]\n"                                                                   \
"\n"                                                                    \
"LEVELS[30] = [\n"                                                      \
"['4',\n"                                                               \
"'    5 5 . .',\n"                                                      \
"'   3 . 2+2 6',\n"                                                     \
"'  3 . 2 . 5 .',\n"                                                    \
"' . 3 3+4 4 . 3',\n"                                                   \
"'  4 5 4 . 5 4',\n"                                                    \
"'   5+2 . . 3',\n"                                                     \
"'    4 . . .'],\n"                                                     \
"['   3 4 3 .',\n"                                                      \
"'  4 6 5 2 .',\n"                                                      \
"' 2 5 5 . . 2',\n"                                                     \
"'. . 5 4 . 4 3',\n"                                                    \
"' . 3 5 4 5 4',\n"                                                     \
"'  . 2 . 3 3',\n"                                                      \
"'   . . . .']\n"                                                       \
"]\n"                                                                   \
"\n"                                                                    \
"LEVELS[36] = [\n"                                                      \
"['4',\n"                                                               \
"'    2 1 1 2',\n"                                                      \
"'   3 3 3 . .',\n"                                                     \
"'  2 3 3 . 4 .',\n"                                                    \
"' . 2 . 2 4 3 2',\n"                                                   \
"'  2 2 . . . 2',\n"                                                    \
"'   4 3 4 . .',\n"                                                     \
"'    3 2 3 3'],\n"                                                     \
"['   3 4 3 2',\n"                                                      \
"'  3 4 4 . 3',\n"                                                      \
"' 2 . . 3 4 3',\n"                                                     \
"'2 . 1 . 3 . 2',\n"                                                    \
"' 3 3 . 2 . 2',\n"                                                     \
"'  3 . 2 . 2',\n"                                                      \
"'   2 2 . 1']\n"                                                       \
"]\n"                                                                   \
"\n"                                                                    \
"\n"                                                                    \
"result = []\n"                                                         \
"\n"                                                                    \
"\n"                                                                    \
"def main(loops, level):\n"                                             \
"    global result\n"                                                   \
"    board, solution = LEVELS[level]\n"                                 \
"    order = DESCENDING\n"                                              \
"    strategy = Done.FIRST_STRATEGY\n"                                  \
"\n"                                                                    \
"    board = board\n"                                                   \
"    expected = solution\n"                                             \
"\n"                                                                    \
"    range_it = range(loops)\n"                                         \
"\n"                                                                    \
"    for _ in range_it:\n"                                              \
"        solve_file(board, strategy, order, None)\n"                    \
"\n"                                                                    \
"    for i in range(len(result)):\n"                                    \
"        result[i] = result[i].rstrip()\n"                              \
"    if result != expected:\n"                                          \
"        print('res:', result)\n"                                       \
"        print('exp:', expected)\n"                                     \
"        sys.exit(1)\n"                                                 \
"\n"                                                                    \
"\n"                                                                    \
"main(LOOPS, DEFAULT_LEVEL)\n"                                          \
"sys.exit(0)"

#elif SELECT_SCRIPT == 10

/* bm_pyflate.py */
#define PYTHON_SCRIPT                                                   \
"import uhashlib as hashlib\n" \
"import sys\n" \
"\n" \
"\n" \
"file_cnt = None\n" \
"data = [\n" \
"chr(66), chr(90), chr(104), chr(57), chr(49), chr(65), chr(89), chr(38), chr(83),\n" \
"chr(89), chr(91), chr(250), chr(50), chr(16), chr(0), chr(0), chr(124),\n" \
"chr(95), chr(128), chr(110), chr(16), chr(64), chr(115), chr(255), chr(240),\n" \
"chr(31), chr(99), chr(223), chr(0), chr(191), chr(239), chr(223), chr(224),\n" \
"chr(64), chr(1), chr(252), chr(151), chr(77), chr(0), chr(104), chr(136),\n" \
"chr(155), chr(68), chr(201), chr(145), chr(136), chr(194), chr(26), chr(105),\n" \
"chr(161), chr(181), chr(0), chr(1), chr(160), chr(1), chr(204), chr(0),\n" \
"chr(19), chr(0), chr(1), chr(48), chr(0), chr(0), chr(0), chr(0),\n" \
"chr(134), chr(169), chr(234), chr(134), chr(131), chr(76), chr(141), chr(26),\n" \
"chr(26), chr(122), chr(76), chr(64), chr(52), chr(218), chr(131), chr(33),\n" \
"chr(160), chr(12), chr(9), chr(34), chr(8), chr(39), chr(162), chr(50),\n" \
"chr(141), chr(49), chr(52), chr(38), chr(134), chr(155), chr(73), chr(228),\n" \
"chr(64), chr(52), chr(217), chr(53), chr(51), chr(82), chr(98), chr(72),\n" \
"chr(166), chr(93), chr(249), chr(76), chr(185), chr(56), chr(67), chr(199),\n" \
"chr(237), chr(235), chr(33), chr(117), chr(5), chr(187), chr(252), chr(222),\n" \
"chr(7), chr(14), chr(139), chr(127), chr(72), chr(172), chr(154), chr(65),\n" \
"chr(102), chr(248), chr(242), chr(191), chr(54), chr(34), chr(16), chr(21),\n" \
"chr(137), chr(21), chr(50), chr(61), chr(4), chr(24), chr(224), chr(132),\n" \
"chr(73), chr(36), chr(112), chr(175), chr(101), chr(45), chr(127), chr(228),\n" \
"chr(186), chr(213), chr(60), chr(91), chr(209), chr(137), chr(146), chr(45),\n" \
"chr(214), chr(35), chr(132), chr(193), chr(3), chr(48), chr(6), chr(117),\n" \
"chr(78), chr(157), chr(21), chr(174), chr(184), chr(73), chr(114), chr(41),\n" \
"chr(24), chr(89), chr(105), chr(167), chr(215), chr(108), chr(222), chr(67),\n" \
"chr(176), chr(60), chr(126), chr(159), chr(30), chr(216), chr(96), chr(16),\n" \
"chr(18), chr(206), chr(113), chr(254), chr(100), chr(83), chr(155), chr(27),\n" \
"chr(143), chr(50), chr(77), chr(166), chr(203), chr(39), chr(85), chr(8),\n" \
"chr(41), chr(34), chr(155), chr(49), chr(2), chr(11), chr(7), chr(8),\n" \
"chr(65), chr(208), chr(100), chr(0), chr(188), chr(117), chr(13), chr(225),\n" \
"chr(244), chr(218), chr(135), chr(1), chr(193), chr(28), chr(226), chr(67),\n" \
"chr(237), chr(220), chr(32), chr(121), chr(151), chr(123), chr(107), chr(127),\n" \
"chr(40), chr(187), chr(184), chr(39), chr(103), chr(103), chr(102), chr(0),\n" \
"chr(128), chr(0), chr(0), chr(142), chr(238), chr(82), chr(151), chr(104),\n" \
"chr(151), chr(57), chr(148), chr(8), chr(134), chr(80), chr(25), chr(122),\n" \
"chr(50), chr(66), chr(40), chr(174), chr(68), chr(148), chr(3), chr(240),\n" \
"chr(235), chr(6), chr(174), chr(236), chr(10), chr(228), chr(54), chr(247),\n" \
"chr(67), chr(218), chr(199), chr(11), chr(158), chr(156), chr(30), chr(5),\n" \
"chr(232), chr(238), chr(216), chr(47), chr(241), chr(160), chr(196), chr(169),\n" \
"chr(124), chr(32), chr(106), chr(134), chr(202), chr(84), chr(115), chr(65),\n" \
"chr(88), chr(140), chr(115), chr(251), chr(9), chr(28), chr(103), chr(145),\n" \
"chr(67), chr(95), chr(21), chr(30), chr(214), chr(75), chr(114), chr(47),\n" \
"chr(130), chr(193), chr(174), chr(23), chr(185), chr(228), chr(191), chr(170),\n" \
"chr(133), chr(82), chr(245), chr(247), chr(33), chr(94), chr(232), chr(41),\n" \
"chr(198), chr(133), chr(240), chr(8), chr(41), chr(40), chr(75), chr(56),\n" \
"chr(179), chr(222), chr(1), chr(212), chr(90), chr(20), chr(236), chr(155),\n" \
"chr(4), chr(66), chr(88), chr(62), chr(212), chr(221), chr(178), chr(42),\n" \
"chr(47), chr(132), chr(155), chr(140), chr(9), chr(6), chr(12), chr(109),\n" \
"chr(139), chr(156), chr(65), chr(161), chr(179), chr(151), chr(34), chr(98),\n" \
"chr(9), chr(218), chr(158), chr(197), chr(223), chr(7), chr(2), chr(16),\n" \
"chr(201), chr(80), chr(205), chr(2), chr(146), chr(177), chr(234), chr(89),\n" \
"chr(116), chr(245), chr(86), chr(136), chr(51), chr(49), chr(11), chr(159),\n" \
"chr(161), chr(22), chr(193), chr(123), chr(116), chr(195), chr(84), chr(64),\n" \
"chr(196), chr(137), chr(90), chr(230), chr(178), chr(229), chr(49), chr(72),\n" \
"chr(32), chr(144), chr(70), chr(71), chr(21), chr(152), chr(189), chr(22),\n" \
"chr(17), chr(211), chr(21), chr(200), chr(17), chr(134), chr(163), chr(207),\n" \
"chr(54), chr(138), chr(102), chr(132), chr(251), chr(176), chr(79), chr(133),\n" \
"chr(230), chr(92), chr(44), chr(35), chr(92), chr(8), chr(2), chr(26),\n" \
"chr(162), chr(29), chr(148), chr(140), chr(212), chr(153), chr(58), chr(158),\n" \
"chr(90), chr(39), chr(52), chr(168), chr(180), chr(247), chr(120), chr(74),\n" \
"chr(187), chr(50), chr(56), chr(53), chr(193), chr(210), chr(230), chr(12),\n" \
"chr(223), chr(19), chr(182), chr(242), chr(172), chr(21), chr(149), chr(178),\n" \
"chr(141), chr(197), chr(232), chr(101), chr(141), chr(106), chr(106), chr(93),\n" \
"chr(148), chr(76), chr(204), chr(41), chr(58), chr(211), chr(141), chr(150),\n" \
"chr(178), chr(171), chr(175), chr(68), chr(150), chr(176), chr(59), chr(197),\n" \
"chr(37), chr(50), chr(174), chr(89), chr(199), chr(41), chr(18), chr(224),\n" \
"chr(70), chr(76), chr(118), chr(179), chr(43), chr(15), chr(175), chr(252),\n" \
"chr(93), chr(201), chr(20), chr(225), chr(66), chr(65), chr(111), chr(232),\n" \
"chr(200), chr(64)]\n" \
"data = ''.join(data)\n" \
"\n" \
"\n" \
"class BitfieldBase(object):\n" \
"\n" \
"    def __init__(self, x, isBitfieldBase):\n" \
"        if isBitfieldBase:\n" \
"            self.f = x.f\n" \
"            self.bits = x.bits\n" \
"            self.bitfield = x.bitfield\n" \
"            self.count = x.bitfield\n" \
"        else:\n" \
"            self.f = x\n" \
"            self.bits = 0\n" \
"            self.bitfield = 0x0\n" \
"            self.count = 0\n" \
"\n" \
"    def _read(self, n):\n" \
"        global file_cnt\n" \
"        s = ''\n" \
"        for i in range(n):\n" \
"            if file_cnt + i >= len(self.f):\n" \
"                break\n" \
"            s += self.f[file_cnt + i]\n" \
"        file_cnt += len(s)\n" \
"        self.count += len(s)\n" \
"        return s\n" \
"\n" \
"    def needbits(self, n):\n" \
"        while self.bits < n:\n" \
"            self._more()\n" \
"\n" \
"    def _mask(self, n):\n" \
"        return (1 << n) - 1\n" \
"\n" \
"    def toskip(self):\n" \
"        return self.bits & 0x7\n" \
"\n" \
"    def align(self):\n" \
"        self.readbits(self.toskip())\n" \
"\n" \
"    def dropbits(self, n=8):\n" \
"        while n >= self.bits and n > 7:\n" \
"            n -= self.bits\n" \
"            self.bits = 0\n" \
"            n -= len(self._read(n >> 3)) << 3\n" \
"        if n:\n" \
"            self.readbits(n)\n" \
"\n" \
"    def dropbytes(self, n=1):\n" \
"        self.dropbits(n << 3)\n" \
"\n" \
"    def tell(self):\n" \
"        return self.count - ((self.bits + 7) >> 3), 7 - ((self.bits - 1) & 0x7)\n" \
"\n" \
"    def tellbits(self):\n" \
"        bytes, bits = self.tell()\n" \
"        return (bytes << 3) + bits\n" \
"\n" \
"\n" \
"class Bitfield(BitfieldBase):\n" \
"\n" \
"    def _more(self):\n" \
"        c = self._read(1)\n" \
"        self.bitfield += ord(c) << self.bits\n" \
"        self.bits += 8\n" \
"\n" \
"    def snoopbits(self, n=8):\n" \
"        if n > self.bits:\n" \
"            self.needbits(n)\n" \
"        return self.bitfield & self._mask(n)\n" \
"\n" \
"    def readbits(self, n=8):\n" \
"        if n > self.bits:\n" \
"            self.needbits(n)\n" \
"        r = self.bitfield & self._mask(n)\n" \
"        self.bits -= n\n" \
"        self.bitfield >>= n\n" \
"        return r\n" \
"\n" \
"\n" \
"class RBitfield(BitfieldBase):\n" \
"\n" \
"    def _more(self):\n" \
"        c = self._read(1)\n" \
"        self.bitfield <<= 8\n" \
"        self.bitfield += ord(c)\n" \
"        self.bits += 8\n" \
"\n" \
"    def snoopbits(self, n=8):\n" \
"        if n > self.bits:\n" \
"            self.needbits(n)\n" \
"        return (self.bitfield >> (self.bits - n)) & self._mask(n)\n" \
"\n" \
"    def readbits(self, n=8):\n" \
"        if n > self.bits:\n" \
"            self.needbits(n)\n" \
"        r = (self.bitfield >> (self.bits - n)) & self._mask(n)\n" \
"        self.bits -= n\n" \
"        self.bitfield &= ~(self._mask(n) << self.bits)\n" \
"        return r\n" \
"\n" \
"\n" \
"def printbits(v, n):\n" \
"    o = ''\n" \
"    for i in range(n):\n" \
"        if v & 1:\n" \
"            o = '1' + o\n" \
"        else:\n" \
"            o = '0' + o\n" \
"        v >>= 1\n" \
"    return o\n" \
"\n" \
"\n" \
"class HuffmanLength(object):\n" \
"\n" \
"    def __init__(self, code, bits=0):\n" \
"        self.code = code\n" \
"        self.bits = bits\n" \
"        self.symbol = None\n" \
"        self.reverse_symbol = None\n" \
"\n" \
"    def __repr__(self):\n" \
"        return repr((self.code, self.bits, self.symbol, self.reverse_symbol))\n" \
"\n" \
"    @staticmethod\n" \
"    def _sort_func(obj):\n" \
"        return (obj.bits, obj.code)\n" \
"\n" \
"\n" \
"def reverse_bits(v, n):\n" \
"    a = 1 << 0\n" \
"    b = 1 << (n - 1)\n" \
"    z = 0\n" \
"    for i in range(n - 1, -1, -2):\n" \
"        z |= (v >> i) & a\n" \
"        z |= (v << i) & b\n" \
"        a <<= 1\n" \
"        b >>= 1\n" \
"    return z\n" \
"\n" \
"\n" \
"def reverse_bytes(v, n):\n" \
"    a = 0xff << 0\n" \
"    b = 0xff << (n - 8)\n" \
"    z = 0\n" \
"    for i in range(n - 8, -8, -16):\n" \
"        z |= (v >> i) & a\n" \
"        z |= (v << i) & b\n" \
"        a <<= 8\n" \
"        b >>= 8\n" \
"    return z\n" \
"\n" \
"\n" \
"class HuffmanTable(object):\n" \
"\n" \
"    def __init__(self, bootstrap):\n" \
"        l = []\n" \
"        start, bits = bootstrap[0]\n" \
"        for finish, endbits in bootstrap[1:]:\n" \
"            if bits:\n" \
"                for code in range(start, finish):\n" \
"                    l.append(HuffmanLength(code, bits))\n" \
"            start, bits = finish, endbits\n" \
"            if endbits == -1:\n" \
"                break\n" \
"        l.sort(key=HuffmanLength._sort_func)\n" \
"        self.table = l\n" \
"\n" \
"    def populate_huffman_symbols(self):\n" \
"        bits, symbol = -1, -1\n" \
"        for x in self.table:\n" \
"            symbol += 1\n" \
"            if x.bits != bits:\n" \
"                symbol <<= (x.bits - bits)\n" \
"                bits = x.bits\n" \
"            x.symbol = symbol\n" \
"            x.reverse_symbol = reverse_bits(symbol, bits)\n" \
"\n" \
"    def tables_by_bits(self):\n" \
"        d = {}\n" \
"        for x in self.table:\n" \
"            try:\n" \
"                d[x.bits].append(x)\n" \
"            except:   # noqa\n" \
"                d[x.bits] = [x]\n" \
"\n" \
"    def min_max_bits(self):\n" \
"        self.min_bits, self.max_bits = 16, -1\n" \
"        for x in self.table:\n" \
"            if x.bits < self.min_bits:\n" \
"                self.min_bits = x.bits\n" \
"            if x.bits > self.max_bits:\n" \
"                self.max_bits = x.bits\n" \
"\n" \
"    def _find_symbol(self, bits, symbol, table):\n" \
"        for h in table:\n" \
"            if h.bits == bits and h.reverse_symbol == symbol:\n" \
"                return h.code\n" \
"        return -1\n" \
"\n" \
"    def find_next_symbol(self, field, reversed=True):\n" \
"        cached_length = -1\n" \
"        cached = None\n" \
"        for x in self.table:\n" \
"            if cached_length != x.bits:\n" \
"                cached = field.snoopbits(x.bits)\n" \
"                cached_length = x.bits\n" \
"            if (reversed and x.reverse_symbol == cached) or (not reversed and x.symbol == cached):\n" \
"                field.readbits(x.bits)\n" \
"                return x.code\n" \
"        raise Exception('unfound symbol, even after end of table @%r'\n" \
"                        % field.tell())\n" \
"\n" \
"        for bits in range(self.min_bits, self.max_bits + 1):\n" \
"            r = self._find_symbol(bits, field.snoopbits(bits), self.table)\n" \
"            if 0 <= r:\n" \
"                field.readbits(bits)\n" \
"                return r\n" \
"            elif bits == self.max_bits:\n" \
"                raise 'unfound symbol, even after max_bits'\n" \
"\n" \
"\n" \
"class OrderedHuffmanTable(HuffmanTable):\n" \
"\n" \
"    def __init__(self, lengths):\n" \
"        l = len(lengths)\n" \
"        z = list(zip(range(l), lengths)) + [(l, -1)]\n" \
"        HuffmanTable.__init__(self, z)\n" \
"\n" \
"\n" \
"def code_length_orders(i):\n" \
"    return (16, 17, 18, 0, 8, 7, 9, 6, 10, 5, 11, 4, 12, 3,\n" \
"            13, 2, 14, 1, 15)[i]\n" \
"\n" \
"\n" \
"def distance_base(i):\n" \
"    return (1, 2, 3, 4, 5, 7, 9, 13, 17, 25, 33, 49, 65, 97, 129, 193,\n" \
"            257, 385, 513, 769, 1025, 1537, 2049, 3073, 4097, 6145, 8193,\n" \
"            12289, 16385, 24577)[i]\n" \
"\n" \
"\n" \
"def length_base(i):\n" \
"    return (3, 4, 5, 6, 7, 8, 9, 10, 11, 13, 15, 17, 19, 23, 27, 31, 35,\n" \
"            43, 51, 59, 67, 83, 99, 115, 131, 163, 195, 227, 258)[i - 257]\n" \
"\n" \
"\n" \
"def extra_distance_bits(n):\n" \
"    if 0 <= n <= 1:\n" \
"        return 0\n" \
"    elif 2 <= n <= 29:\n" \
"        return (n >> 1) - 1\n" \
"    else:\n" \
"        raise 'illegal distance code'\n" \
"\n" \
"\n" \
"def extra_length_bits(n):\n" \
"    if 257 <= n <= 260 or n == 285:\n" \
"        return 0\n" \
"    elif 261 <= n <= 284:\n" \
"        return ((n - 257) >> 2) - 1\n" \
"    else:\n" \
"        raise 'illegal length code'\n" \
"\n" \
"\n" \
"def move_to_front(l, c):\n" \
"    l[:] = l[c:c + 1] + l[0:c] + l[c + 1:]\n" \
"\n" \
"\n" \
"def bwt_transform(L):\n" \
"    F = ''.join(sorted(L))\n" \
"    base = []\n" \
"    for i in range(256):\n" \
"        base.append(F.find(chr(i)))\n" \
"\n" \
"    pointers = [-1] * len(L)\n" \
"    for i in range(len(L)):\n" \
"        symbol = ord(L[i])\n" \
"        pointers[base[symbol]] = i\n" \
"        base[symbol] += 1\n" \
"    return pointers\n" \
"\n" \
"\n" \
"def bwt_reverse(L, end):\n" \
"    out = []\n" \
"    if len(L):\n" \
"        T = bwt_transform(L)\n" \
"\n" \
"\n" \
"        for i in range(len(L)):\n" \
"            end = T[end]\n" \
"            out.append(L[end])\n" \
"\n" \
"    return ''.join(out)\n" \
"\n" \
"\n" \
"def compute_used(b):\n" \
"    huffman_used_map = b.readbits(16)\n" \
"    map_mask = 1 << 15\n" \
"    used = []\n" \
"    while map_mask > 0:\n" \
"        if huffman_used_map & map_mask:\n" \
"            huffman_used_bitmap = b.readbits(16)\n" \
"            bit_mask = 1 << 15\n" \
"            while bit_mask > 0:\n" \
"                if huffman_used_bitmap & bit_mask:\n" \
"                    pass\n" \
"                used += [bool(huffman_used_bitmap & bit_mask)]\n" \
"                bit_mask >>= 1\n" \
"        else:\n" \
"            used += [False] * 16\n" \
"        map_mask >>= 1\n" \
"    return used\n" \
"\n" \
"\n" \
"def compute_selectors_list(b, huffman_groups):\n" \
"    selectors_used = b.readbits(15)\n" \
"    mtf = list(range(huffman_groups))\n" \
"    selectors_list = []\n" \
"    for i in range(selectors_used):\n" \
"        c = 0\n" \
"        while b.readbits(1):\n" \
"            c += 1\n" \
"            if c >= huffman_groups:\n" \
"                raise 'Bzip2 chosen selector greater than number of groups (max 6)'\n" \
"        if c >= 0:\n" \
"            move_to_front(mtf, c)\n" \
"        selectors_list.append(mtf[0])\n" \
"    return selectors_list\n" \
"\n" \
"\n" \
"def compute_tables(b, huffman_groups, symbols_in_use):\n" \
"    groups_lengths = []\n" \
"    for j in range(huffman_groups):\n" \
"        length = b.readbits(5)\n" \
"        lengths = []\n" \
"        for i in range(symbols_in_use):\n" \
"            if not 0 <= length <= 20:\n" \
"                raise 'Bzip2 Huffman length code outside range 0..20'\n" \
"            while b.readbits(1):\n" \
"                length -= (b.readbits(1) * 2) - 1\n" \
"            lengths += [length]\n" \
"        groups_lengths += [lengths]\n" \
"\n" \
"    tables = []\n" \
"    for g in groups_lengths:\n" \
"        codes = OrderedHuffmanTable(g)\n" \
"        codes.populate_huffman_symbols()\n" \
"        codes.min_max_bits()\n" \
"        tables.append(codes)\n" \
"    return tables\n" \
"\n" \
"\n" \
"def decode_huffman_block(b, out):\n" \
"    randomised = b.readbits(1)\n" \
"    if randomised:\n" \
"        raise 'Bzip2 randomised support not implemented'\n" \
"    pointer = b.readbits(24)\n" \
"    used = compute_used(b)\n" \
"\n" \
"    huffman_groups = b.readbits(3)\n" \
"    if not 2 <= huffman_groups <= 6:\n" \
"        raise Exception('Bzip2: Number of Huffman groups not in range 2..6')\n" \
"\n" \
"    selectors_list = compute_selectors_list(b, huffman_groups)\n" \
"    symbols_in_use = sum(used) + 2\n" \
"    tables = compute_tables(b, huffman_groups, symbols_in_use)\n" \
"\n" \
"    favourites = [chr(i) for i, x in enumerate(used) if x]\n" \
"\n" \
"    selector_pointer = 0\n" \
"    decoded = 0\n" \
"    repeat = repeat_power = 0\n" \
"    buffer = []\n" \
"    t = None\n" \
"    while True:\n" \
"        decoded -= 1\n" \
"        if decoded <= 0:\n" \
"            decoded = 50 \n" \
"            if selector_pointer <= len(selectors_list):\n" \
"                t = tables[selectors_list[selector_pointer]]\n" \
"                selector_pointer += 1\n" \
"\n" \
"        r = t.find_next_symbol(b, False)\n" \
"        if 0 <= r <= 1:\n" \
"            if repeat == 0:\n" \
"                repeat_power = 1\n" \
"            repeat += repeat_power << r\n" \
"            repeat_power <<= 1\n" \
"            continue\n" \
"        elif repeat > 0:\n" \
"            buffer.append(favourites[0] * repeat)\n" \
"            repeat = 0\n" \
"        if r == symbols_in_use - 1:\n" \
"            break\n" \
"        else:\n" \
"            o = favourites[r - 1]\n" \
"            move_to_front(favourites, r - 1)\n" \
"            buffer.append(o)\n" \
"            pass\n" \
"\n" \
"    nt = nearly_there = bwt_reverse(''.join(buffer), pointer)\n" \
"    i = 0\n" \
"    while i < len(nearly_there):\n" \
"        if i < len(nearly_there) - 4 and nt[i] == nt[i + 1] == nt[i + 2] == nt[i + 3]:\n" \
"            out.append(nearly_there[i:i + 1] * (ord(nearly_there[i + 4:i + 5]) + 4))\n" \
"            i += 5\n" \
"        else:\n" \
"            out.append(nearly_there[i:i + 1])\n" \
"            i += 1\n" \
"\n" \
"\n" \
"def bzip2_main(input):\n" \
"    b = RBitfield(input, True)\n" \
"\n" \
"    method = b.readbits(8)\n" \
"    if method != ord('h'):\n" \
"        raise Exception(\n" \
"            \"Unknown (not type 'h'uffman Bzip2) compression method\")\n" \
"\n" \
"    blocksize = b.readbits(8)\n" \
"    if ord('1') <= blocksize <= ord('9'):\n" \
"        blocksize = blocksize - ord('0')\n" \
"    else:\n" \
"        raise Exception(\"Unknown (not size '0'-'9') Bzip2 blocksize\")\n" \
"\n" \
"    out = []\n" \
"    while True:\n" \
"        blocktype = b.readbits(48)\n" \
"        b.readbits(32)\n" \
"        if blocktype == 0x314159265359:\n" \
"            decode_huffman_block(b, out)\n" \
"        elif blocktype == 0x177245385090:\n" \
"            b.align()\n" \
"            break\n" \
"        else:\n" \
"            raise Exception('Illegal Bzip2 blocktype')\n" \
"    return ''.join(out)\n" \
"\n" \
"\n" \
"def gzip_main(field):\n" \
"    b = Bitfield(field)\n" \
"    method = b.readbits(8)\n" \
"    if method != 8:\n" \
"        raise Exception('Unknown (not type eight DEFLATE) compression method')\n" \
"\n" \
"    flags = b.readbits(8)\n" \
"    b.readbits(32)\n" \
"    b.readbits(8)\n" \
"    b.readbits(8)\n" \
"\n" \
"    if flags & 0x04:\n" \
"        xlen = b.readbits(16)\n" \
"        b.dropbytes(xlen)\n" \
"    while flags & 0x08:\n" \
"        if not b.readbits(8):\n" \
"            break\n" \
"    while flags & 0x10:\n" \
"        if not b.readbits(8):\n" \
"            break\n" \
"    if flags & 0x02:\n" \
"        b.readbits(16)\n" \
"\n" \
"    out = []\n" \
"    while True:\n" \
"        lastbit = b.readbits(1)\n" \
"        blocktype = b.readbits(2)\n" \
"\n" \
"        if blocktype == 0:\n" \
"            b.align()\n" \
"            length = b.readbits(16)\n" \
"            if length & b.readbits(16):\n" \
"                raise Exception('stored block lengths do not match each other')\n" \
"            for i in range(length):\n" \
"                out.append(chr(b.readbits(8)))\n" \
"\n" \
"        elif blocktype == 1 or blocktype == 2:\n" \
"            main_literals, main_distances = None, None\n" \
"\n" \
"            if blocktype == 1:\n" \
"                static_huffman_bootstrap = [\n" \
"                    (0, 8), (144, 9), (256, 7), (280, 8), (288, -1)]\n" \
"                static_huffman_lengths_bootstrap = [(0, 5), (32, -1)]\n" \
"                main_literals = HuffmanTable(static_huffman_bootstrap)\n" \
"                main_distances = HuffmanTable(static_huffman_lengths_bootstrap)\n" \
"\n" \
"            elif blocktype == 2:\n" \
"                literals = b.readbits(5) + 257\n" \
"                distances = b.readbits(5) + 1\n" \
"                code_lengths_length = b.readbits(4) + 4\n" \
"\n" \
"                l = [0] * 19\n" \
"                for i in range(code_lengths_length):\n" \
"                    l[code_length_orders(i)] = b.readbits(3)\n" \
"\n" \
"                dynamic_codes = OrderedHuffmanTable(l)\n" \
"                dynamic_codes.populate_huffman_symbols()\n" \
"                dynamic_codes.min_max_bits()\n" \
"\n" \
"                code_lengths = []\n" \
"                n = 0\n" \
"                while n < (literals + distances):\n" \
"                    r = dynamic_codes.find_next_symbol(b)\n" \
"                    if 0 <= r <= 15:\n" \
"                        count = 1\n" \
"                        what = r\n" \
"                    elif r == 16:\n" \
"                        count = 3 + b.readbits(2)\n" \
"                        what = code_lengths[-1]\n" \
"                    elif r == 17:\n" \
"                        count = 3 + b.readbits(3)\n" \
"                        what = 0\n" \
"                    elif r == 18:\n" \
"                        count = 11 + b.readbits(7)\n" \
"                        what = 0\n" \
"                    else:\n" \
"                        raise Exception(\n" \
"                            'next code length is outside of the range 0 <= r <= 18')\n" \
"                    code_lengths += [what] * count\n" \
"                    n += count\n" \
"\n" \
"                main_literals = OrderedHuffmanTable(code_lengths[:literals])\n" \
"                main_distances = OrderedHuffmanTable(code_lengths[literals:])\n" \
"\n" \
"            main_literals.populate_huffman_symbols()\n" \
"            main_distances.populate_huffman_symbols()\n" \
"\n" \
"            main_literals.min_max_bits()\n" \
"            main_distances.min_max_bits()\n" \
"\n" \
"            literal_count = 0\n" \
"            while True:\n" \
"                r = main_literals.find_next_symbol(b)\n" \
"                if 0 <= r <= 255:\n" \
"                    literal_count += 1\n" \
"                    out.append(chr(r))\n" \
"                elif r == 256:\n" \
"                    if literal_count > 0:\n" \
"                        literal_count = 0\n" \
"                    break\n" \
"                elif 257 <= r <= 285:\n" \
"                    if literal_count > 0:\n" \
"                        literal_count = 0\n" \
"                    length_extra = b.readbits(extra_length_bits(r))\n" \
"                    length = length_base(r) + length_extra\n" \
"\n" \
"                    r1 = main_distances.find_next_symbol(b)\n" \
"                    if 0 <= r1 <= 29:\n" \
"                        distance = distance_base(\n" \
"                            r1) + b.readbits(extra_distance_bits(r1))\n" \
"                        while length > distance:\n" \
"                            out += out[-distance:]\n" \
"                            length -= distance\n" \
"                        if length == distance:\n" \
"                            out += out[-distance:]\n" \
"                        else:\n" \
"                            out += out[-distance:length - distance]\n" \
"                    elif 30 <= r1 <= 31:\n" \
"                        raise Exception('illegal unused distance symbol '\n" \
"                                        'in use @%r' % b.tell())\n" \
"                elif 286 <= r <= 287:\n" \
"                    raise Exception('illegal unused literal/length symbol '\n" \
"                                    'in use @%r' % b.tell())\n" \
"        elif blocktype == 3:\n" \
"            raise Exception('illegal unused blocktype in use @%r' % b.tell())\n" \
"\n" \
"        if lastbit:\n" \
"            break\n" \
"\n" \
"    b.align()\n" \
"    b.readbits(32)\n" \
"    b.readbits(32)\n" \
"    return ''.join(out)\n" \
"\n" \
"\n" \
"def bench_pyflake(loops):\n" \
"    global file_cnt\n" \
"    global data\n" \
"\n" \
"    range_it = range(loops)\n" \
"\n" \
"    for _ in range_it:\n" \
"        file_cnt = 0\n" \
"        field = RBitfield(data, False)\n" \
"\n" \
"        magic = field.readbits(16)\n" \
"        if magic == 0x1f8b:\n" \
"            out = gzip_main(field)\n" \
"        elif magic == 0x425a:\n" \
"            out = bzip2_main(field)\n" \
"        else:\n" \
"            raise Exception('Unknown file magic %x, not a gzip/bzip2 file'\n" \
"                            % hex(magic))\n" \
"\n" \
"    hex = ''\n" \
"    md = hashlib.sha256(out).digest()\n" \
"    for i in range(len(md)):\n" \
"        h = (md[i] >> 4) & 15\n" \
"        if h < 10:\n" \
"            hex += chr(ord('0') + h)\n" \
"        else:\n" \
"            hex += chr(ord('a') + h - 10)\n" \
"        h = md[i] & 15\n" \
"        if h < 10:\n" \
"            hex += chr(ord('0') + h)\n" \
"        else:\n" \
"            hex += chr(ord('a') + h - 10)\n" \
"    if hex != 'e489b238e12b64506b61c98f624189039f762e6ecc96bfab688a1e3478aef523':\n" \
"        raise Exception('MD5 checksum mismatch')\n" \
"\n" \
"\n" \
"LOOPS = 1\n" \
"bench_pyflake(LOOPS)\n" \
"sys.exit(0)"

#else
#error "Python script not selected. Please define SELECT_SCRIPT correctly!"
#endif /* SELECT_SCRIPT */

#endif /* _SCRIPT_H_ */
