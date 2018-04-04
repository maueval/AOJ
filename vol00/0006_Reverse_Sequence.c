#include <stdio.h>
#include <string.h>
#define SIZE 22

int main() {
    char line[SIZE];
    fgets(line, SIZE, stdin);
    line[strlen(line) - 1] = '\0';
    int last = strlen(line) - 1;
    for (int i = 0; i <= last / 2; i++) {
        char tmp;
        tmp = line[i];
        line[i] = line[last - i];
        line[last - i] = tmp;
    }
    printf("%s\n", line);
}
