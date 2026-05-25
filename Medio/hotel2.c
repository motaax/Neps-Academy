#include <stdio.h>

int main() {
    int D, A, N;

    scanf("%d", &D);
    scanf("%d", &A);
    scanf("%d", &N);

    int diaria;

    if (N <= 15)
        diaria = D + (N - 1) * A;
    else
        diaria = D + 14 * A;

    int dias = 32 - N;

    printf("%d\n", diaria * dias);

    return 0;
}