#include <stdio.h>

int main() {
    int A1, A2, A3;

    scanf("%d", &A1);
    scanf("%d", &A2);
    scanf("%d", &A3);

    int op1 = (A2 * 2) + (A3 * 4);

    int op2 = (A1 * 2) + (A3 * 2);

    int op3 = (A1 * 4) + (A2 * 2);

    int menor = op1;

    if (op2 < menor)
        menor = op2;

    if (op3 < menor)
        menor = op3;

    printf("%d\n", menor);

    return 0;
}