#define PYTHON_SCRIPT                                                   \
"import sys\n"                                                          \
"\n"                                                                    \
"expected = [\n"                                                        \
"    (0, 2, 4, 1, 3),\n"                                                \
"    (0, 3, 1, 4, 2),\n"                                                \
"    (1, 3, 0, 2, 4),\n"                                                \
"    (1, 4, 2, 0, 3),\n"                                                \
"    (2, 0, 3, 1, 4),\n"                                                \
"    (2, 4, 1, 3, 0),\n"                                                \
"    (3, 0, 2, 4, 1),\n"                                                \
"    (3, 1, 4, 2, 0),\n"                                                \
"    (4, 1, 3, 0, 2),\n"                                                \
"    (4, 2, 0, 3, 1)\n"                                                 \
"]\n"                                                                   \
"\n"                                                                    \
"def permutations(iterable, r=None):\n"                                 \
"    res = []\n"                                                        \
"    pool = tuple(iterable)\n"                                          \
"    n = len(pool)\n"                                                   \
"    if r is None:\n"                                                   \
"        r = n\n"                                                       \
"    indices = list(range(n))\n"                                        \
"    cycles = []\n"                                                     \
"    for i in reversed(list(range(n - r + 1, n + 1))):\n"               \
"        cycles.append(i)\n"                                            \
"    res.append(tuple(pool[i] for i in indices[:r]))\n"                 \
"    print(\"permutation start\")\n"                                    \
"    while n:\n"                                                        \
"        for i in reversed(range(r)):\n"                                \
"            cycles[i] -= 1\n"                                          \
"            if cycles[i] == 0:\n"                                      \
"                print(\"permutations if\")\n"                          \
"                indices[i:] = indices[i + 1:] + indices[i:i + 1]\n"    \
"                cycles[i] = n - i\n"                                   \
"            else:\n"                                                   \
"                print(\"permutations else\")\n"                        \
"                j = cycles[i]\n"                                       \
"                indices[i], indices[-j] = indices[-j], indices[i]\n"   \
"                res.append(tuple(pool[i] for i in indices[:r]))\n"     \
"                break\n"                                               \
"        else:\n"                                                       \
"            print(\"Permutation end\")\n"                              \
"            return res\n"                                              \
"    print(\"Permutation end\")\n"                                      \
"    return res\n"                                                      \
"\n"                                                                    \
"\n"                                                                    \
"def n_queens(queen_count):\n"                                          \
"    print(\"Starting nqueens\")\n"                                     \
"    cols = range(queen_count)\n"                                       \
"    res = []\n"                                                        \
"    for vec in permutations(cols):\n"                                  \
"        if (queen_count == len(set(vec[i] + i for i in cols))\n"       \
"                        == len(set(vec[i] - i for i in cols))):\n"     \
"            res.append(vec)\n"                                         \
"    return res\n"                                                      \
"\n"                                                                    \
"\n"                                                                    \
"def bench_n_queens(queen_count):\n"                                    \
"    res = n_queens(queen_count)\n"                                     \
"    print(res)\n"                                                      \
"    if expected == res:\n"                                             \
"        print(\"PASS\")\n"                                             \
"        sys.exit(0)\n"                                                 \
"    else:\n"                                                           \
"        print(\"FAIL\")\n"                                             \
"        sys.exit(1)\n"                                                 \
"\n"                                                                    \
"\n"                                                                    \
"print(\"Starting python\")\n"                                          \
"bench_n_queens(5)"

/*
"import sys\n"                                                          \
"\n"                                                                    \
"a = [1, 2, 3, 4, 5]\n"                                                 \
"print(\"Hello world!\", a)\n"                                          \
"sys.exit(0)"
*/
