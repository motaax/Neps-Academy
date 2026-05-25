#include <stdio.h>

int main() {
    int X, Y;
    scanf("%d %d", &X, &Y);

    int volta = 1;

    while (volta * (Y - X) < Y) {
        volta++;
    }

    printf("%d\n", volta);

    return 0;
}