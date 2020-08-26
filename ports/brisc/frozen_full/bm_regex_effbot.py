import ure as re
import sys

def re_compile(s):
    return re.compile(s)

def gen_regex_table():
    return [
        re_compile('Python|Perl'),
        re_compile('Python|Perl'),
        re_compile('(Python|Perl)'),
        re_compile('(?:Python|Perl)'),
        re_compile('Python'),
        re_compile('Python'),
        re_compile('.*Python'),
        re_compile('.*Python.*'),
        re_compile('.*(Python)'),
        re_compile('.*(?:Python)'),
        re_compile('Python|Perl|Tcl'),
        re_compile('Python|Perl|Tcl'),
        re_compile('(Python|Perl|Tcl)'),
        re_compile('(?:Python|Perl|Tcl)'),
        re_compile('(Python)Python'),
        re_compile('(Python)Python'),
        re_compile('([0a-z][a-z0-9]*,)+'),
        re_compile('(?:[0a-z][a-z0-9]*,)+'),
        re_compile('([a-z][a-z0-9]*,)+'),
        re_compile('(?:[a-z][a-z0-9]*,)+'),
        re_compile('.*P.*y.*t.*h.*o.*n.*')]

def gen_string_table(n):
    strings = []

    def append(s):
        strings.append(s)
    append('-' * n + 'Perl' + '-' * n)
    append('P' * n + 'Perl' + 'P' * n)
    append('-' * n + 'Perl' + '-' * n)
    append('-' * n + 'Perl' + '-' * n)
    append('-' * n + 'Python' + '-' * n)
    append('P' * n + 'Python' + 'P' * n)
    append('-' * n + 'Python' + '-' * n)
    append('-' * n + 'Python' + '-' * n)
    append('-' * n + 'Python' + '-' * n)
    append('-' * n + 'Python' + '-' * n)
    append('-' * n + 'Perl' + '-' * n)
    append('P' * n + 'Perl' + 'P' * n)
    append('-' * n + 'Perl' + '-' * n)
    append('-' * n + 'Perl' + '-' * n)
    append('-' * n + 'PythonPython' + '-' * n)
    append('P' * n + 'PythonPython' + 'P' * n)
    append('-' * n + 'a5,b7,c9,' + '-' * n)
    append('-' * n + 'a5,b7,c9,' + '-' * n)
    append('-' * n + 'a5,b7,c9,' + '-' * n)
    append('-' * n + 'a5,b7,c9,' + '-' * n)
    append('-' * n + 'Python' + '-' * n)
    return strings

def init_benchmarks(n_values=None):
    if n_values is None:
        n_values = (0, 5)

    string_tables = {n: gen_string_table(n) for n in n_values}
    regexs = gen_regex_table()

    data = []
    for n in n_values:
        for id in range(len(regexs)):
            regex = regexs[id]
            string = string_tables[n][id]
            data.append((regex, string))
    return data

def bench_regex_effbot(loops):
    data = init_benchmarks()

    range_it = range(loops)

    for _ in range_it:
        for regex, string in data:
            if regex.search(string) is None:
                sys.exit(1)
            if regex.search(string) is None:
                sys.exit(1)
            if regex.search(string) is None:
                sys.exit(1)
            if regex.search(string) is None:
                sys.exit(1)
            if regex.search(string) is None:
                sys.exit(1)
            if regex.search(string) is None:
                sys.exit(1)
            if regex.search(string) is None:
                sys.exit(1)
            if regex.search(string) is None:
                sys.exit(1)
            if regex.search(string) is None:
                sys.exit(1)
            if regex.search(string) is None:
                sys.exit(1)

LOOPS = 1
bench_regex_effbot(LOOPS)
sys.exit(0)
