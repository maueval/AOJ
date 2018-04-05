#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Sieve of Eratosthenes
int main() {
    int n;

    while (~scanf("%d", &n)) {
        bool *cand = (bool *)malloc((n + 1) * sizeof(bool));
        memset(cand, false, sizeof(bool) * (n + 1));
        int i = 2;
        while (i < n) {
            if (cand[i] == true) {
                i++;
                continue;
            }
            int m = 2;
            while (i * m <= n) {
                cand[i * m] = true;
                m++;
            }
            i++;
        }
        int cnt = 0;
        //skip 0 and 1
        for (int k = 2; k < n + 1; k++) {
            if (cand[k] == false) {
                cnt++;
            }
        }
        printf("%d\n", cnt);
    }
    return 0;
}
