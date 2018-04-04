#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 16 //1000 + " " + 1000 + " " + 1000 + \n + \0

int cmp(const void *a, const void *b) {
    return *(int *)a - *(int *)b;
}
int main() {
    char line[SIZE];
    int n_lines;
    scanf("%d", &n_lines);
    int num[3];
    for (int i = 0; i < n_lines; i++) {
        scanf("%d %d %d", &num[0], &num[1], &num[2]);

        qsort(num, 3, sizeof(int), cmp);

        if (num[2] * num[2] == num[0] * num[0] + num[1] * num[1]) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
}
