#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 32

int main() {
    char line[SIZE];
    while (fgets(line, SIZE, stdin) != NULL) {
        if (*line == '\n')
            continue;

        char *str;
        str = strtok(line, " ");
        long num[6];
        int i = 0;
        num[i] = atol(str);
        while ((str = strtok(NULL, " ")) != NULL) {
            num[++i] = atol(str);
        }
        long denom = num[0] * num[4] - num[1] * num[3];
        float ans_x = (float)(num[4] * num[2] - num[1] * num[5]) / denom;
        float ans_y = (float)(num[0] * num[5] - num[3] * num[2]) / denom;

        //Avoid -0
        if (ans_x == 0)
            ans_x = 0;
        if (ans_y == 0)
            ans_y = 0;
        printf("%.3f %.3f\n", ans_x, ans_y);
    }
}
