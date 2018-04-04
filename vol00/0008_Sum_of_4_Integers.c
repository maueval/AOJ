#include <stdio.h>

int main() {
    int n;
    int a, b, c, d;
    while (~scanf("%d", &n)) {
        int cnt = 0;
        for (int a = 0; a <= 9; a++) {
            for (int b = 0; b <= 9; b++) {
                for (int c = 0; c <= 9; c++) {
                    d = n - (a + b + c);
                    if (d >= 0 && d <= 9) {
                        cnt++;
                    }
                }
            }
        }
        printf("%d\n", cnt);
    }
    return 0;
}
