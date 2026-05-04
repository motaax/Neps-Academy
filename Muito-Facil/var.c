#include <stdio.h>

int main() {
    int x, y;

    if (scanf("%d %d", &x, &y) != 2) {
        return 0;
    }

    if (x >= -8 && x <= 8 && y >= 0 && y <= 8) {
        printf("S\n");
    } else {
        printf("N\n");
    }

    return 0;
}