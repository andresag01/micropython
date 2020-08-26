import uhashlib as hashlib
import sys


file_cnt = None
data = [
chr(66), chr(90), chr(104), chr(57), chr(49), chr(65), chr(89), chr(38), chr(83),
chr(89), chr(91), chr(250), chr(50), chr(16), chr(0), chr(0), chr(124),
chr(95), chr(128), chr(110), chr(16), chr(64), chr(115), chr(255), chr(240),
chr(31), chr(99), chr(223), chr(0), chr(191), chr(239), chr(223), chr(224),
chr(64), chr(1), chr(252), chr(151), chr(77), chr(0), chr(104), chr(136),
chr(155), chr(68), chr(201), chr(145), chr(136), chr(194), chr(26), chr(105),
chr(161), chr(181), chr(0), chr(1), chr(160), chr(1), chr(204), chr(0),
chr(19), chr(0), chr(1), chr(48), chr(0), chr(0), chr(0), chr(0),
chr(134), chr(169), chr(234), chr(134), chr(131), chr(76), chr(141), chr(26),
chr(26), chr(122), chr(76), chr(64), chr(52), chr(218), chr(131), chr(33),
chr(160), chr(12), chr(9), chr(34), chr(8), chr(39), chr(162), chr(50),
chr(141), chr(49), chr(52), chr(38), chr(134), chr(155), chr(73), chr(228),
chr(64), chr(52), chr(217), chr(53), chr(51), chr(82), chr(98), chr(72),
chr(166), chr(93), chr(249), chr(76), chr(185), chr(56), chr(67), chr(199),
chr(237), chr(235), chr(33), chr(117), chr(5), chr(187), chr(252), chr(222),
chr(7), chr(14), chr(139), chr(127), chr(72), chr(172), chr(154), chr(65),
chr(102), chr(248), chr(242), chr(191), chr(54), chr(34), chr(16), chr(21),
chr(137), chr(21), chr(50), chr(61), chr(4), chr(24), chr(224), chr(132),
chr(73), chr(36), chr(112), chr(175), chr(101), chr(45), chr(127), chr(228),
chr(186), chr(213), chr(60), chr(91), chr(209), chr(137), chr(146), chr(45),
chr(214), chr(35), chr(132), chr(193), chr(3), chr(48), chr(6), chr(117),
chr(78), chr(157), chr(21), chr(174), chr(184), chr(73), chr(114), chr(41),
chr(24), chr(89), chr(105), chr(167), chr(215), chr(108), chr(222), chr(67),
chr(176), chr(60), chr(126), chr(159), chr(30), chr(216), chr(96), chr(16),
chr(18), chr(206), chr(113), chr(254), chr(100), chr(83), chr(155), chr(27),
chr(143), chr(50), chr(77), chr(166), chr(203), chr(39), chr(85), chr(8),
chr(41), chr(34), chr(155), chr(49), chr(2), chr(11), chr(7), chr(8),
chr(65), chr(208), chr(100), chr(0), chr(188), chr(117), chr(13), chr(225),
chr(244), chr(218), chr(135), chr(1), chr(193), chr(28), chr(226), chr(67),
chr(237), chr(220), chr(32), chr(121), chr(151), chr(123), chr(107), chr(127),
chr(40), chr(187), chr(184), chr(39), chr(103), chr(103), chr(102), chr(0),
chr(128), chr(0), chr(0), chr(142), chr(238), chr(82), chr(151), chr(104),
chr(151), chr(57), chr(148), chr(8), chr(134), chr(80), chr(25), chr(122),
chr(50), chr(66), chr(40), chr(174), chr(68), chr(148), chr(3), chr(240),
chr(235), chr(6), chr(174), chr(236), chr(10), chr(228), chr(54), chr(247),
chr(67), chr(218), chr(199), chr(11), chr(158), chr(156), chr(30), chr(5),
chr(232), chr(238), chr(216), chr(47), chr(241), chr(160), chr(196), chr(169),
chr(124), chr(32), chr(106), chr(134), chr(202), chr(84), chr(115), chr(65),
chr(88), chr(140), chr(115), chr(251), chr(9), chr(28), chr(103), chr(145),
chr(67), chr(95), chr(21), chr(30), chr(214), chr(75), chr(114), chr(47),
chr(130), chr(193), chr(174), chr(23), chr(185), chr(228), chr(191), chr(170),
chr(133), chr(82), chr(245), chr(247), chr(33), chr(94), chr(232), chr(41),
chr(198), chr(133), chr(240), chr(8), chr(41), chr(40), chr(75), chr(56),
chr(179), chr(222), chr(1), chr(212), chr(90), chr(20), chr(236), chr(155),
chr(4), chr(66), chr(88), chr(62), chr(212), chr(221), chr(178), chr(42),
chr(47), chr(132), chr(155), chr(140), chr(9), chr(6), chr(12), chr(109),
chr(139), chr(156), chr(65), chr(161), chr(179), chr(151), chr(34), chr(98),
chr(9), chr(218), chr(158), chr(197), chr(223), chr(7), chr(2), chr(16),
chr(201), chr(80), chr(205), chr(2), chr(146), chr(177), chr(234), chr(89),
chr(116), chr(245), chr(86), chr(136), chr(51), chr(49), chr(11), chr(159),
chr(161), chr(22), chr(193), chr(123), chr(116), chr(195), chr(84), chr(64),
chr(196), chr(137), chr(90), chr(230), chr(178), chr(229), chr(49), chr(72),
chr(32), chr(144), chr(70), chr(71), chr(21), chr(152), chr(189), chr(22),
chr(17), chr(211), chr(21), chr(200), chr(17), chr(134), chr(163), chr(207),
chr(54), chr(138), chr(102), chr(132), chr(251), chr(176), chr(79), chr(133),
chr(230), chr(92), chr(44), chr(35), chr(92), chr(8), chr(2), chr(26),
chr(162), chr(29), chr(148), chr(140), chr(212), chr(153), chr(58), chr(158),
chr(90), chr(39), chr(52), chr(168), chr(180), chr(247), chr(120), chr(74),
chr(187), chr(50), chr(56), chr(53), chr(193), chr(210), chr(230), chr(12),
chr(223), chr(19), chr(182), chr(242), chr(172), chr(21), chr(149), chr(178),
chr(141), chr(197), chr(232), chr(101), chr(141), chr(106), chr(106), chr(93),
chr(148), chr(76), chr(204), chr(41), chr(58), chr(211), chr(141), chr(150),
chr(178), chr(171), chr(175), chr(68), chr(150), chr(176), chr(59), chr(197),
chr(37), chr(50), chr(174), chr(89), chr(199), chr(41), chr(18), chr(224),
chr(70), chr(76), chr(118), chr(179), chr(43), chr(15), chr(175), chr(252),
chr(93), chr(201), chr(20), chr(225), chr(66), chr(65), chr(111), chr(232),
chr(200), chr(64)]
data = ''.join(data)


class BitfieldBase(object):

    def __init__(self, x, isBitfieldBase):
        if isBitfieldBase:
            self.f = x.f
            self.bits = x.bits
            self.bitfield = x.bitfield
            self.count = x.bitfield
        else:
            self.f = x
            self.bits = 0
            self.bitfield = 0x0
            self.count = 0

    def _read(self, n):
        global file_cnt
        s = ''
        for i in range(n):
            if file_cnt + i >= len(self.f):
                break
            s += self.f[file_cnt + i]
        file_cnt += len(s)
        self.count += len(s)
        return s

    def needbits(self, n):
        while self.bits < n:
            self._more()

    def _mask(self, n):
        return (1 << n) - 1

    def toskip(self):
        return self.bits & 0x7

    def align(self):
        self.readbits(self.toskip())

    def dropbits(self, n=8):
        while n >= self.bits and n > 7:
            n -= self.bits
            self.bits = 0
            n -= len(self._read(n >> 3)) << 3
        if n:
            self.readbits(n)

    def dropbytes(self, n=1):
        self.dropbits(n << 3)

    def tell(self):
        return self.count - ((self.bits + 7) >> 3), 7 - ((self.bits - 1) & 0x7)

    def tellbits(self):
        bytes, bits = self.tell()
        return (bytes << 3) + bits


class Bitfield(BitfieldBase):

    def _more(self):
        c = self._read(1)
        self.bitfield += ord(c) << self.bits
        self.bits += 8

    def snoopbits(self, n=8):
        if n > self.bits:
            self.needbits(n)
        return self.bitfield & self._mask(n)

    def readbits(self, n=8):
        if n > self.bits:
            self.needbits(n)
        r = self.bitfield & self._mask(n)
        self.bits -= n
        self.bitfield >>= n
        return r


class RBitfield(BitfieldBase):

    def _more(self):
        c = self._read(1)
        self.bitfield <<= 8
        self.bitfield += ord(c)
        self.bits += 8

    def snoopbits(self, n=8):
        if n > self.bits:
            self.needbits(n)
        return (self.bitfield >> (self.bits - n)) & self._mask(n)

    def readbits(self, n=8):
        if n > self.bits:
            self.needbits(n)
        r = (self.bitfield >> (self.bits - n)) & self._mask(n)
        self.bits -= n
        self.bitfield &= ~(self._mask(n) << self.bits)
        return r


def printbits(v, n):
    o = ''
    for i in range(n):
        if v & 1:
            o = '1' + o
        else:
            o = '0' + o
        v >>= 1
    return o


class HuffmanLength(object):

    def __init__(self, code, bits=0):
        self.code = code
        self.bits = bits
        self.symbol = None
        self.reverse_symbol = None

    def __repr__(self):
        return repr((self.code, self.bits, self.symbol, self.reverse_symbol))

    @staticmethod
    def _sort_func(obj):
        return (obj.bits, obj.code)


def reverse_bits(v, n):
    a = 1 << 0
    b = 1 << (n - 1)
    z = 0
    for i in range(n - 1, -1, -2):
        z |= (v >> i) & a
        z |= (v << i) & b
        a <<= 1
        b >>= 1
    return z


def reverse_bytes(v, n):
    a = 0xff << 0
    b = 0xff << (n - 8)
    z = 0
    for i in range(n - 8, -8, -16):
        z |= (v >> i) & a
        z |= (v << i) & b
        a <<= 8
        b >>= 8
    return z


class HuffmanTable(object):

    def __init__(self, bootstrap):
        l = []
        start, bits = bootstrap[0]
        for finish, endbits in bootstrap[1:]:
            if bits:
                for code in range(start, finish):
                    l.append(HuffmanLength(code, bits))
            start, bits = finish, endbits
            if endbits == -1:
                break
        l.sort(key=HuffmanLength._sort_func)
        self.table = l

    def populate_huffman_symbols(self):
        bits, symbol = -1, -1
        for x in self.table:
            symbol += 1
            if x.bits != bits:
                symbol <<= (x.bits - bits)
                bits = x.bits
            x.symbol = symbol
            x.reverse_symbol = reverse_bits(symbol, bits)

    def tables_by_bits(self):
        d = {}
        for x in self.table:
            try:
                d[x.bits].append(x)
            except:   # noqa
                d[x.bits] = [x]

    def min_max_bits(self):
        self.min_bits, self.max_bits = 16, -1
        for x in self.table:
            if x.bits < self.min_bits:
                self.min_bits = x.bits
            if x.bits > self.max_bits:
                self.max_bits = x.bits

    def _find_symbol(self, bits, symbol, table):
        for h in table:
            if h.bits == bits and h.reverse_symbol == symbol:
                return h.code
        return -1

    def find_next_symbol(self, field, reversed=True):
        cached_length = -1
        cached = None
        for x in self.table:
            if cached_length != x.bits:
                cached = field.snoopbits(x.bits)
                cached_length = x.bits
            if (reversed and x.reverse_symbol == cached) or (not reversed and x.symbol == cached):
                field.readbits(x.bits)
                return x.code
        raise Exception('unfound symbol, even after end of table @%r'
                        % field.tell())

        for bits in range(self.min_bits, self.max_bits + 1):
            r = self._find_symbol(bits, field.snoopbits(bits), self.table)
            if 0 <= r:
                field.readbits(bits)
                return r
            elif bits == self.max_bits:
                raise 'unfound symbol, even after max_bits'


class OrderedHuffmanTable(HuffmanTable):

    def __init__(self, lengths):
        l = len(lengths)
        z = list(zip(range(l), lengths)) + [(l, -1)]
        HuffmanTable.__init__(self, z)


def code_length_orders(i):
    return (16, 17, 18, 0, 8, 7, 9, 6, 10, 5, 11, 4, 12, 3,
            13, 2, 14, 1, 15)[i]


def distance_base(i):
    return (1, 2, 3, 4, 5, 7, 9, 13, 17, 25, 33, 49, 65, 97, 129, 193,
            257, 385, 513, 769, 1025, 1537, 2049, 3073, 4097, 6145, 8193,
            12289, 16385, 24577)[i]


def length_base(i):
    return (3, 4, 5, 6, 7, 8, 9, 10, 11, 13, 15, 17, 19, 23, 27, 31, 35,
            43, 51, 59, 67, 83, 99, 115, 131, 163, 195, 227, 258)[i - 257]


def extra_distance_bits(n):
    if 0 <= n <= 1:
        return 0
    elif 2 <= n <= 29:
        return (n >> 1) - 1
    else:
        raise 'illegal distance code'


def extra_length_bits(n):
    if 257 <= n <= 260 or n == 285:
        return 0
    elif 261 <= n <= 284:
        return ((n - 257) >> 2) - 1
    else:
        raise 'illegal length code'


def move_to_front(l, c):
    l[:] = l[c:c + 1] + l[0:c] + l[c + 1:]


def bwt_transform(L):
    F = ''.join(sorted(L))
    base = []
    for i in range(256):
        base.append(F.find(chr(i)))

    pointers = [-1] * len(L)
    for i in range(len(L)):
        symbol = ord(L[i])
        pointers[base[symbol]] = i
        base[symbol] += 1
    return pointers


def bwt_reverse(L, end):
    out = []
    if len(L):
        T = bwt_transform(L)


        for i in range(len(L)):
            end = T[end]
            out.append(L[end])

    return ''.join(out)


def compute_used(b):
    huffman_used_map = b.readbits(16)
    map_mask = 1 << 15
    used = []
    while map_mask > 0:
        if huffman_used_map & map_mask:
            huffman_used_bitmap = b.readbits(16)
            bit_mask = 1 << 15
            while bit_mask > 0:
                if huffman_used_bitmap & bit_mask:
                    pass
                used += [bool(huffman_used_bitmap & bit_mask)]
                bit_mask >>= 1
        else:
            used += [False] * 16
        map_mask >>= 1
    return used


def compute_selectors_list(b, huffman_groups):
    selectors_used = b.readbits(15)
    mtf = list(range(huffman_groups))
    selectors_list = []
    for i in range(selectors_used):
        c = 0
        while b.readbits(1):
            c += 1
            if c >= huffman_groups:
                raise 'Bzip2 chosen selector greater than number of groups (max 6)'
        if c >= 0:
            move_to_front(mtf, c)
        selectors_list.append(mtf[0])
    return selectors_list


def compute_tables(b, huffman_groups, symbols_in_use):
    groups_lengths = []
    for j in range(huffman_groups):
        length = b.readbits(5)
        lengths = []
        for i in range(symbols_in_use):
            if not 0 <= length <= 20:
                raise 'Bzip2 Huffman length code outside range 0..20'
            while b.readbits(1):
                length -= (b.readbits(1) * 2) - 1
            lengths += [length]
        groups_lengths += [lengths]

    tables = []
    for g in groups_lengths:
        codes = OrderedHuffmanTable(g)
        codes.populate_huffman_symbols()
        codes.min_max_bits()
        tables.append(codes)
    return tables


def decode_huffman_block(b, out):
    randomised = b.readbits(1)
    if randomised:
        raise 'Bzip2 randomised support not implemented'
    pointer = b.readbits(24)
    used = compute_used(b)

    huffman_groups = b.readbits(3)
    if not 2 <= huffman_groups <= 6:
        raise Exception('Bzip2: Number of Huffman groups not in range 2..6')

    selectors_list = compute_selectors_list(b, huffman_groups)
    symbols_in_use = sum(used) + 2
    tables = compute_tables(b, huffman_groups, symbols_in_use)

    favourites = [chr(i) for i, x in enumerate(used) if x]

    selector_pointer = 0
    decoded = 0
    repeat = repeat_power = 0
    buffer = []
    t = None
    while True:
        decoded -= 1
        if decoded <= 0:
            decoded = 50 
            if selector_pointer <= len(selectors_list):
                t = tables[selectors_list[selector_pointer]]
                selector_pointer += 1

        r = t.find_next_symbol(b, False)
        if 0 <= r <= 1:
            if repeat == 0:
                repeat_power = 1
            repeat += repeat_power << r
            repeat_power <<= 1
            continue
        elif repeat > 0:
            buffer.append(favourites[0] * repeat)
            repeat = 0
        if r == symbols_in_use - 1:
            break
        else:
            o = favourites[r - 1]
            move_to_front(favourites, r - 1)
            buffer.append(o)
            pass

    nt = nearly_there = bwt_reverse(''.join(buffer), pointer)
    i = 0
    while i < len(nearly_there):
        if i < len(nearly_there) - 4 and nt[i] == nt[i + 1] == nt[i + 2] == nt[i + 3]:
            out.append(nearly_there[i:i + 1] * (ord(nearly_there[i + 4:i + 5]) + 4))
            i += 5
        else:
            out.append(nearly_there[i:i + 1])
            i += 1


def bzip2_main(input):
    b = RBitfield(input, True)

    method = b.readbits(8)
    if method != ord('h'):
        raise Exception(
            "Unknown (not type 'h'uffman Bzip2) compression method")

    blocksize = b.readbits(8)
    if ord('1') <= blocksize <= ord('9'):
        blocksize = blocksize - ord('0')
    else:
        raise Exception("Unknown (not size '0'-'9') Bzip2 blocksize")

    out = []
    while True:
        blocktype = b.readbits(48)
        b.readbits(32)
        if blocktype == 0x314159265359:
            decode_huffman_block(b, out)
        elif blocktype == 0x177245385090:
            b.align()
            break
        else:
            raise Exception('Illegal Bzip2 blocktype')
    return ''.join(out)


def gzip_main(field):
    b = Bitfield(field)
    method = b.readbits(8)
    if method != 8:
        raise Exception('Unknown (not type eight DEFLATE) compression method')

    flags = b.readbits(8)
    b.readbits(32)
    b.readbits(8)
    b.readbits(8)

    if flags & 0x04:
        xlen = b.readbits(16)
        b.dropbytes(xlen)
    while flags & 0x08:
        if not b.readbits(8):
            break
    while flags & 0x10:
        if not b.readbits(8):
            break
    if flags & 0x02:
        b.readbits(16)

    out = []
    while True:
        lastbit = b.readbits(1)
        blocktype = b.readbits(2)

        if blocktype == 0:
            b.align()
            length = b.readbits(16)
            if length & b.readbits(16):
                raise Exception('stored block lengths do not match each other')
            for i in range(length):
                out.append(chr(b.readbits(8)))

        elif blocktype == 1 or blocktype == 2:
            main_literals, main_distances = None, None

            if blocktype == 1:
                static_huffman_bootstrap = [
                    (0, 8), (144, 9), (256, 7), (280, 8), (288, -1)]
                static_huffman_lengths_bootstrap = [(0, 5), (32, -1)]
                main_literals = HuffmanTable(static_huffman_bootstrap)
                main_distances = HuffmanTable(static_huffman_lengths_bootstrap)

            elif blocktype == 2:
                literals = b.readbits(5) + 257
                distances = b.readbits(5) + 1
                code_lengths_length = b.readbits(4) + 4

                l = [0] * 19
                for i in range(code_lengths_length):
                    l[code_length_orders(i)] = b.readbits(3)

                dynamic_codes = OrderedHuffmanTable(l)
                dynamic_codes.populate_huffman_symbols()
                dynamic_codes.min_max_bits()

                code_lengths = []
                n = 0
                while n < (literals + distances):
                    r = dynamic_codes.find_next_symbol(b)
                    if 0 <= r <= 15:
                        count = 1
                        what = r
                    elif r == 16:
                        count = 3 + b.readbits(2)
                        what = code_lengths[-1]
                    elif r == 17:
                        count = 3 + b.readbits(3)
                        what = 0
                    elif r == 18:
                        count = 11 + b.readbits(7)
                        what = 0
                    else:
                        raise Exception(
                            'next code length is outside of the range 0 <= r <= 18')
                    code_lengths += [what] * count
                    n += count

                main_literals = OrderedHuffmanTable(code_lengths[:literals])
                main_distances = OrderedHuffmanTable(code_lengths[literals:])

            main_literals.populate_huffman_symbols()
            main_distances.populate_huffman_symbols()

            main_literals.min_max_bits()
            main_distances.min_max_bits()

            literal_count = 0
            while True:
                r = main_literals.find_next_symbol(b)
                if 0 <= r <= 255:
                    literal_count += 1
                    out.append(chr(r))
                elif r == 256:
                    if literal_count > 0:
                        literal_count = 0
                    break
                elif 257 <= r <= 285:
                    if literal_count > 0:
                        literal_count = 0
                    length_extra = b.readbits(extra_length_bits(r))
                    length = length_base(r) + length_extra

                    r1 = main_distances.find_next_symbol(b)
                    if 0 <= r1 <= 29:
                        distance = distance_base(
                            r1) + b.readbits(extra_distance_bits(r1))
                        while length > distance:
                            out += out[-distance:]
                            length -= distance
                        if length == distance:
                            out += out[-distance:]
                        else:
                            out += out[-distance:length - distance]
                    elif 30 <= r1 <= 31:
                        raise Exception('illegal unused distance symbol '
                                        'in use @%r' % b.tell())
                elif 286 <= r <= 287:
                    raise Exception('illegal unused literal/length symbol '
                                    'in use @%r' % b.tell())
        elif blocktype == 3:
            raise Exception('illegal unused blocktype in use @%r' % b.tell())

        if lastbit:
            break

    b.align()
    b.readbits(32)
    b.readbits(32)
    return ''.join(out)


def bench_pyflake(loops):
    global file_cnt
    global data

    range_it = range(loops)

    for _ in range_it:
        file_cnt = 0
        field = RBitfield(data, False)

        magic = field.readbits(16)
        if magic == 0x1f8b:
            out = gzip_main(field)
        elif magic == 0x425a:
            out = bzip2_main(field)
        else:
            raise Exception('Unknown file magic %x, not a gzip/bzip2 file'
                            % hex(magic))

    hex = ''
    md = hashlib.sha256(out).digest()
    for i in range(len(md)):
        h = (md[i] >> 4) & 15
        if h < 10:
            hex += chr(ord('0') + h)
        else:
            hex += chr(ord('a') + h - 10)
        h = md[i] & 15
        if h < 10:
            hex += chr(ord('0') + h)
        else:
            hex += chr(ord('a') + h - 10)
    if hex != 'e489b238e12b64506b61c98f624189039f762e6ecc96bfab688a1e3478aef523':
        raise Exception('MD5 checksum mismatch')


LOOPS = 1
bench_pyflake(LOOPS)
sys.exit(0)
