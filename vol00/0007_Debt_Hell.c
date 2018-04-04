#include <stdio.h>
#define INIT_DEBT 100000

int main() {
    int n_weeks;
    int debt = INIT_DEBT;
    scanf("%d", &n_weeks);
    while (n_weeks-- > 0) {
        debt = debt * 1.05;
        if (debt % 1000 != 0) {
            debt = debt / 1000 * 1000 + 1000;
        }
    }
    printf("%d\n", debt);
    return 0;
}
