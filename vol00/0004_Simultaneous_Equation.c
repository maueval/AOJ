#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 32

int main() {
    long a, b, c, d, e, f;
    while (~scanf("%ld %ld %ld %ld %ld %ld", &a, &b, &c, &d, &e, &f)) {
        long denom = a * e - b * d;
        float ans_x = (float)(e * c - b * f) / denom;
        float ans_y = (float)(a * f - d * c) / denom;

        //Avoid -0
        ans_x += 0;
        ans_y += 0;

        printf("%.3f %.3f\n", ans_x, ans_y);
    }
}
