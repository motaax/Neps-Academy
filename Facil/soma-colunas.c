#include <stdio.h>

int main() {
    int m[3][3];
    int i, j;
    int soma[3] = {0, 0, 0};

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &m[i][j]);
            soma[j] += m[i][j]; 
        }
    }

    for (j = 0; j < 3; j++) {
        printf("Coluna %d: %d\n", j, soma[j]);
    }

    return 0;
}