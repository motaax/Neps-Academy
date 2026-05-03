#include <stdio.h>

int main() {
    int A, B;
    scanf("%d %d", &A, &B);

    int soma = A + B;
    int sub = A - B;

    if (soma > sub) {
        printf("%d\n%d\n", soma, sub);
    } else {
        printf("%d\n%d\n", sub, soma);
    }

    return 0;
}