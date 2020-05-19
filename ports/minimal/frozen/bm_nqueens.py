import sys

def permutations(iterable, r=None):
    pool = tuple(iterable)
    n = len(pool)
    if r is None:
        r = n
    indices = list(range(n))
    cycles = list(range(n - r + 1, n + 1))[::-1]
    yield tuple(pool[i] for i in indices[:r])
    while n:
        for i in reversed(range(r)):
            cycles[i] -= 1
            if cycles[i] == 0:
                indices[i:] = indices[i + 1:] + indices[i:i + 1]
                cycles[i] = n - i
            else:
                j = cycles[i]
                indices[i], indices[-j] = indices[-j], indices[i]
                yield tuple(pool[i] for i in indices[:r])
                break
        else:
            return

def n_queens(queen_count):
    cols = range(queen_count)
    for vec in permutations(cols):
        if (queen_count == len(set(vec[i] + i for i in cols))
                        == len(set(vec[i] - i for i in cols))):
            yield vec

def bench_n_queens(queen_count):
    print(list(n_queens(queen_count)))

QUEEN_COUNT = 6
bench_n_queens(QUEEN_COUNT)
sys.exit(0)
