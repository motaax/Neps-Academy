#include <stdio.h>

int ehVerdadeira(int x, int y, int z, int w) {
    return (x == z && y != w);
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);

    if (ehVerdadeira(a, b, c, d) ||
        ehVerdadeira(b, c, d, a) ||
        ehVerdadeira(c, d, a, b) ||
        ehVerdadeira(d, a, b, c)) {
        printf("V\n");
    } else {
        printf("F\n");
    }

    return 0;
}