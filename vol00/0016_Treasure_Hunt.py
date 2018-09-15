import math

if __name__ == '__main__':
    x = 0
    y = 0
    angle = 90

    r, t = map(int, input().split(','))

    while r != 0 or t != 0:
        x = x + r * math.cos(math.radians(angle))
        y = y + r * math.sin(math.radians(angle))
        angle -= t
        r, t = map(int, input().split(','))
    print(int(x))
    print(int(y))
