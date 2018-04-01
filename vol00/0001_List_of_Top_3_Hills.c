#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 7 // 10000 + \n + \0
#define N_MOUNTAINS 10

int desc(const void *p, const void *q) {
    return *(int *)q - *(int *)p;
}

int main() {
    char line[SIZE];
    int results[N_MOUNTAINS];
    int max = 0;
    int i = 0;
    while (fgets(line, SIZE, stdin) != NULL) {
        size_t len = strlen(line);
        line[len - 1] = '\0';
        results[i] = atoi(line);
        i++;
    }
    qsort(results, i, sizeof(int), desc);
    printf("%d\n%d\n%d\n", results[0], results[1], results[2]);
    return 0;
}
