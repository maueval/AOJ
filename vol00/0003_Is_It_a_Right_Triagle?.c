#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 16 //1000 + " " + 1000 + " " + 1000 + \n + \0

int cmp(const void *a, const void *b) {
    return *(int *)a - *(int *)b;
}
int main() {
    char line[SIZE];
    int n_lines = atoi(fgets(line, SIZE, stdin));
    for (int i = 0; i < n_lines; i++) {
        fgets(line, SIZE, stdin);
        char *str;

        int num[3];
        str = strtok(line, " ");
        num[0] = atoi(str);
        str = strtok(NULL, " ");
        num[1] = atoi(str);
        str = strtok(NULL, " ");
        num[2] = atoi(str);

        qsort(num, 3, sizeof(int), cmp);

        if (num[2] * num[2] == num[0] * num[0] + num[1] * num[1]) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
}
