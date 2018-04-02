#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LINE_SIZE 17 //1000000+' '+1000000+\n+\0

char *find_space(char *line, char *buf) {
    int i = 0;
    while (*line != '\0' && *line != ' ' && *line != '\n') {
        buf[i] = *line;
        i++;
        line++;
    }
    buf[i] = '\0';
    return line;
}

int main() {
    char line[LINE_SIZE];
    char *str;
    while (fgets(line, LINE_SIZE, stdin) != NULL) {
        if (*line == '\n')
            continue;
        char buf[LINE_SIZE];
        str = find_space(line, buf);
        long num = atol(buf);
        find_space(str + 1, buf);
        num = num + atol(buf);
        int digit = 1;
        while ((num = num / 10) != 0) {
            digit++;
        }
        printf("%d\n", digit);
    }
    return 0;
}
