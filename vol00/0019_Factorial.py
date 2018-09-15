# import math
# print(math.factorial(int(input())))


def f(a):
    if a == 1:
        return a
    return a * f(a - 1)


print(f(int(input())))
