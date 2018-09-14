# 12,432 -> 012,432
def align_digits(a, b):
    la, lb = len(a), len(b)
    if la < lb:
        a = a.zfill(lb)
    elif lb < la:
        b = b.zfill(la)
    return a, b


def add(a, b):
    a, b = align_digits(a, b)
    zipped = list(zip(a[::-1], b[::-1]))
    carry = 0
    result = []
    for i, z in enumerate(zipped):
        a, b = z
        s = int(a) + int(b) + carry
        carry = int(s / 10)
        if i == len(zipped) - 1:
            result.append(str(s))
        else:
            result.append(str(s % 10))
    ans = ''.join(result[::-1])
    if len(ans) > 80:
        return 'overflow'
    return ans


if __name__ == '__main__':
    n_input = int(input())
    inputs = []
    for i in range(n_input):
        inputs.append((input(), input()))
    for a, b in inputs:
        print(add(a, b))
