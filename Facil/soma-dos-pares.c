#include <stdio.h>

int main() {
    int num;
    int soma = 0;

    while (scanf("%d", &num) != EOF) {

        if (num % 2 == 0) {
            soma += num;
        }
    }

    printf("%d\n", soma);

    return 0;
}