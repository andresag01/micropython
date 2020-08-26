import sys


SOLVE_ARG = 5
LOOPS = 1

WIDTH, HEIGHT = 5, 10
DIR_NO = 6
S, E = WIDTH * HEIGHT, 2
SE = S + (E // 2)
SW = SE - E
W, NW, NE = -E, -SE, -SW

SOLUTIONS = [
    '00001222012661126155865558633348893448934747977799',
    '00001222012771127148774485464855968596835966399333',
    '00001222012771127148774485494855998596835966366333',
    '33366366953869589955849458447784172117721022210000',
    '33399366953869586955846458447784172117721022210000',
    '99777974743984439884333685556855162116621022210000']


def rotate(ido, rd={E: NE, NE: NW, NW: W, W: SW, SW: SE, SE: E}):
    return [rd[o] for o in ido]


def flip(ido, fd={E: E, NE: SE, NW: SW, W: W, SW: NW, SE: NE}):
    return [fd[o] for o in ido]


def permute(ido, r_ido, rotate=rotate, flip=flip):
    ps = [ido]
    for r in range(DIR_NO - 1):
        ps.append(rotate(ps[-1]))
        if ido == r_ido:
            ps = ps[0:DIR_NO // 2]
    for pp in ps[:]:
        ps.append(flip(pp))
    return ps


def convert(ido):
    out = [0]
    for o in ido:
        out.append(out[-1] + o)
    return list(set(out))


def get_footprints(board, cti, pieces):
    fps = [[[] for p in range(len(pieces))] for ci in range(len(board))]
    for c in board:
        for pi, p in enumerate(pieces):
            for pp in p:
                fp = frozenset([cti[c + o] for o in pp if (c + o) in cti])
                if len(fp) == 5:
                    fps[min(fp)][pi].append(fp)
    return fps


def get_senh(board, cti):
    se_nh = []
    nh = [E, SW, SE]
    for c in board:
        se_nh.append(frozenset([cti[c + o] for o in nh if (c + o) in cti]))
    return se_nh


def get_puzzle(width, height):
    board = [E * x + S * y + (y % 2)
             for y in range(height)
             for x in range(width)]
    cti = dict((board[i], i) for i in range(len(board)))

    idos = [[E, E, E, SE],
            [SE, SW, W, SW],
            [W, W, SW, SE],
            [E, E, SW, SE],
            [NW, W, NW, SE, SW],
            [E, E, NE, W],
            [NW, NE, NE, W],
            [NE, SE, E, NE],
            [SE, SE, E, SE],
            [E, NW, NW, NW]]

    perms = (permute(p, idos[3]) for p in idos)
    pieces = [[convert(pp) for pp in p] for p in perms]
    return (board, cti, pieces)


def bisect(array, item):
    for i, a in enumerate(array):
        if item < a:
            return i
    return len(array)


def solve(n, i_min, free, curr_board, pieces_left, solutions, fps, se_nh):

    fp_i_cands = fps[i_min]
    for p in pieces_left:
        fp_cands = fp_i_cands[p]
        for fp in fp_cands:
            if fp <= free:
                n_curr_board = curr_board[:]
                for ci in fp:
                    n_curr_board[ci] = p

                if len(pieces_left) > 1:
                    n_free = free - fp
                    n_i_min = min(n_free)
                    if len(n_free & se_nh[n_i_min]) > 0:
                        n_pieces_left = pieces_left[:]
                        n_pieces_left.remove(p)
                        solve(n, n_i_min, n_free, n_curr_board,
                              n_pieces_left, solutions, fps, se_nh)
                else:
                    s = ''.join(map(str, n_curr_board))
                    solutions.insert(bisect(solutions, s), s)
                    rs = ''.join(reversed(s))
                    solutions.insert(bisect(solutions, rs), rs)
                    if len(solutions) >= n:
                        return

        if len(solutions) >= n:
            return


def bench_meteor_contest(loops, board, pieces, solve_arg, fps, se_nh):
    range_it = range(loops)

    for _ in range_it:
        free = frozenset(range(len(board)))
        curr_board = [-1] * len(board)
        pieces_left = list(range(len(pieces)))
        solutions = []
        solve(solve_arg, 0, free, curr_board, pieces_left,
              solutions, fps, se_nh)

    if solutions != SOLUTIONS:
        raise ValueError("unexpected solutions")


def main():
    board, cti, pieces = get_puzzle(WIDTH, HEIGHT)
    fps = get_footprints(board, cti, pieces)
    se_nh = get_senh(board, cti)

    solve_arg = SOLVE_ARG
    bench_meteor_contest(LOOPS, board, pieces, solve_arg, fps, se_nh)


main()
sys.exit(0)
