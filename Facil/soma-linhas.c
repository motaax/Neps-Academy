#include <stdio.h>

int main() {
    int m[3][3];
    int i, j;
    int soma;

    for (i = 0; i < 3; i++) {
        soma = 0; 

        for (j = 0; j < 3; j++) {
            scanf("%d", &m[i][j]);
            soma += m[i][j];
        }

        printf("Linha %d: %d\n", i, soma);
    }

    return 0;
}