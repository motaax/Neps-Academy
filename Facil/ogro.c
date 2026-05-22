#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;

    int esq = (n > 5) ? 5 : n;
    int dir = (n > 5) ? n - 5 : 0;

    if (esq == 0) puts("*");
    else { while (esq--) putchar('I'); puts(""); }

    if (dir == 0) puts("*");
    else { while (dir--) putchar('I'); puts(""); }

    return 0;
}