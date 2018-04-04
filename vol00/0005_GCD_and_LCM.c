#include <stdio.h>

// must be a <= b
long euclid(long a, long b) {
    if (a == 0)
        return b;
    return euclid(b % a, a);
}

void swap(long *a, long *b) {
    long tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}

int main() {
    long a, b;
    while (~scanf("%ld %ld", &a, &b)) {
        if (a > b)
            swap(&a, &b);
        long gcd = euclid(a, b);
        long lcm = a * b / gcd;
        printf("%ld %ld\n", gcd, lcm);
    }
    return 0;
}
