if __name__ == '__main__':
    w = int(input())
    result = [i + 1 for i in range(w)]

    n = int(input())

    permutations = []
    for _ in range(n):
        permutations.append(map(lambda x: int(x) - 1, input().split(',')))

    for i, j in permutations:
        result[j], result[i] = result[i], result[j]

    print("\n".join(map(str, result)))
