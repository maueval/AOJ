#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LINE_SIZE 17 //1000000+' '+1000000+\n+\0

int main() {
    int num1, num2;
    int sum;
    while (~scanf("%d %d", &num1, &num2)) {
        sum = num1 + num2;
        int digit = 1;
        while ((sum = sum / 10) != 0) {
            digit++;
        }
        printf("%d\n", digit);
    }
    return 0;
}
