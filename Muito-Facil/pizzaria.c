#include <stdio.h>

int main() {
    int G, P;

    scanf("%d", &G);
    scanf("%d", &P);

    int total = G * 8 + P * 4;
    int amigos = total - 2;

    if (amigos < 0) {
        amigos = 0;
    }

    printf("%d\n", amigos);

    return 0;
}