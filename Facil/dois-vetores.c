#include <stdio.h>

int main() {
    int x;
    int pares[10], impares[10];
    int i, p = 0, im = 0;

    for (i = 0; i < 10; i++) {
        scanf("%d", &x);

        if (x % 2 == 0) {
            pares[p++] = x;
        } else {
            impares[im++] = x;
        }
    }

    for (i = 0; i < p; i++) {
        if (i > 0) printf(" ");
        printf("%d", pares[i]);
    }
    printf("\n");

    for (i = 0; i < im; i++) {
        if (i > 0) printf(" ");
        printf("%d", impares[i]);
    }
    printf("\n");

    return 0;
}