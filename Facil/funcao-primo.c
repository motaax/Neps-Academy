#include <stdio.h>

int main() {
    int x, i, primo = 1;

    scanf("%d", &x);

    if (x <= 1) {
        primo = 0;
    } else {
        for (i = 2; i * i <= x; i++) {
            if (x % i == 0) {
                primo = 0;
                break;
            }
        }
    }

    if (primo)
        printf("S\n");
    else
        printf("N\n");

    return 0;
}