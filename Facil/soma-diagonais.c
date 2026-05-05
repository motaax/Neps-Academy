#include <stdio.h>

int main() {
    int matriz[3][3];
    int i, j;
    int diag_principal = 0, diag_secundaria = 0;

    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    for(i = 0; i < 3; i++) {
        diag_principal += matriz[i][i];
    }

    for(i = 0; i < 3; i++) {
        diag_secundaria += matriz[i][2 - i];
    }

    printf("Diagonal principal: %d\n", diag_principal);
    printf("Diagonal secundaria: %d\n", diag_secundaria);

    return 0;
}