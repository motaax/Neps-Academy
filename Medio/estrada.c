#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b) {
    return (*(int *)a) - (*(int *)b);
}

int main() {
    int T, N;

    scanf("%d", &T);
    scanf("%d", &N);

    int x[10000];

    for (int i = 0; i < N; i++) {
        scanf("%d", &x[i]);
    }

    qsort(x, N, sizeof(int), cmp);

    double menor = 1e18;

    for (int i = 0; i < N; i++) {
        double tam;

        if (i == 0) {
            tam = (x[i] + x[i + 1]) / 2.0;
        }
        else if (i == N - 1) {
            tam = T - (x[i - 1] + x[i]) / 2.0;
        }
        else {
            double esq = (x[i - 1] + x[i]) / 2.0;
            double dir = (x[i] + x[i + 1]) / 2.0;
            tam = dir - esq;
        }

        if (tam < menor)
            menor = tam;
    }

    printf("%.2f\n", menor);

    return 0;
}