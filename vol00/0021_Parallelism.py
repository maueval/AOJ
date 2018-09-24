for i in range(int(input())):
    x1, y1, x2, y2, x3, y3, x4, y4 = map(float, input().split())

    if x2 == x1 and x4 == x3:
        print('YES')
        continue

    if x2 == x1 or x4 == x3:
        print('NO')
        continue

    if abs((y2-y1)/(x2-x1) - (y4-y3)/(x4-x3)) < 1e-10:
        print('YES')
    else:
        print('NO')
