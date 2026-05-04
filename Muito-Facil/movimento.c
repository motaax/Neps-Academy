#include <stdio.h>

int main() {
    int X, Y, Z;

    scanf("%d %d %d", &X, &Y, &Z);

    int tempo_total = (X + Y) * 60;
    int limite = Z * 60 + 30;

    if (tempo_total <= limite) {
        printf("1\n");
    } else {
        printf("0\n");
    }

    return 0;
}