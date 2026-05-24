#include <stdio.h>

int main() {
    int L, C;

    scanf("%d", &L);
    scanf("%d", &C);

    int tipo1 = L * C + (L - 1) * (C - 1);
    int tipo2 = 2 * (L + C - 2);

    printf("%d\n", tipo1);
    printf("%d\n", tipo2);

    return 0;
}