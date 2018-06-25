import sys

if __name__ == '__main__':
    stack = []
    for line in sys.stdin:
        n = int(line)
        if n == 0:
            print(stack.pop(len(stack) - 1))
        else:
            stack.append(n)
