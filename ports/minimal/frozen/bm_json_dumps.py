import ujson as json
import sys

EMPTY = ({}, 2000)
SIMPLE_DATA = {'key1': 0, 'key2': True, 'key3': 'value',
               'key4': 'foo',
               'key5': 'string'}
SIMPLE = (SIMPLE_DATA, 1000)
NESTED_DATA = {'key1': 0, 'key2': SIMPLE[0], 'key3': 'value',
               'key4': SIMPLE[0],
               'key5': SIMPLE[0], 'key': 'hello world'}
NESTED = (NESTED_DATA, 100)
HUGE = ([NESTED[0]] * 100, 1)


def bench_json_dumps(data):
    for obj, count_it in data:
        for _ in count_it:
            s = json.dumps(obj)


def main():
    cases = [EMPTY, SIMPLE, NESTED, HUGE]
    data = []
    for case in cases:
        obj, count = case
        data.append((obj, range(count)))

    bench_json_dumps(data)


main()
sys.exit(0)
