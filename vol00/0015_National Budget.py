from collections import deque

"""
# Too slow
def add2(a, b):
    a, b = align_digit(a, b)
    zipped = zip(a[::-1], b[::-1])
    carry = 0
    result = []
    for a, b in zipped:
        s = int(a) + int(b) + carry
        carry = int(s / 10)
        result.append(str(s % 10))
    if result[-1] == '0':
        result[-1] = str(carry)
    print(''.join(result[::-1]))
"""


def align_digit(a, b):
    la, lb = len(a), len(b)
    if la < lb:
        a = a.zfill(lb)
    elif lb < la:
        b = b.zfill(la)
    return a, b


def split_to_ints(s, n=10):
    length = len(s)
    return [int(s[i-n:i]) for i in range(length, 0, -n)]


def add(a, b, n=10):
    a, b = align_digit(a, b)
    print(a, b)
    ints_a = split_to_ints(a, n)
    ints_b = split_to_ints(b, n)
    carry = 0
    result = []

    zipped = list(zip(ints_a, ints_b))[::-1]
    print(zipped)
    for i, (int_a, int_b) in enumerate(zipped):
        s = int_a + int_b + carry
        carry = int(s / (10 ** n))
        if i != len(zipped) - 1:
            result.append(str(s % (10 ** (n - 1))).zfill(n))
        else:
            result.append(str(s))

    print(result)
    ret = str(int(''.join(reversed(result))))
    if len(ret) > 80:
        return 'overflow'
    return ret


if __name__ == '__main__':
    n_input = int(input())
    for i in range(n_input):
        a, b = input(), input()
        print(add(a, b))
