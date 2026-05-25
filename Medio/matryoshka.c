#include <stdio.h>
#include <stdlib.h>

int compara(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int main() {
    int N;
    scanf("%d", &N);

    int *v = (int *)malloc(N * sizeof(int));
    int *ordenado = (int *)malloc(N * sizeof(int));
    int *remover = (int *)malloc(N * sizeof(int));

    for (int i = 0; i < N; i++) {
        scanf("%d", &v[i]);
        ordenado[i] = v[i];
    }

    qsort(ordenado, N, sizeof(int), compara);

    int qtd = 0;

    for (int i = 0; i < N; i++) {
        if (v[i] != ordenado[i]) {
            remover[qtd++] = v[i];
        }
    }

    qsort(remover, qtd, sizeof(int), compara);

    printf("%d\n", qtd);

    if (qtd > 0) {
        for (int i = 0; i < qtd; i++) {
            if (i > 0) printf(" ");
            printf("%d", remover[i]);
        }
        printf("\n");
    }

    free(v);
    free(ordenado);
    free(remover);

    return 0;
}