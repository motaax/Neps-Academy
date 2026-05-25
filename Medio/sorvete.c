#include <stdio.h>

#define MAX 5000

typedef struct {
    int u, v;
} Intervalo;

Intervalo a[MAX];

int main() {
    int P, S;

    scanf("%d %d", &P, &S);

    for (int i = 0; i < S; i++)
        scanf("%d %d", &a[i].u, &a[i].v);

    for (int i = 0; i < S - 1; i++) {
        int min = i;

        for (int j = i + 1; j < S; j++) {
            if (a[j].u < a[min].u)
                min = j;
        }

        Intervalo temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }

    if (S > 0) {
        int ini = a[0].u;
        int fim = a[0].v;

        for (int i = 1; i < S; i++) {
            if (a[i].u <= fim) {
                if (a[i].v > fim)
                    fim = a[i].v;
            } else {
                printf("%d %d\n", ini, fim);

                ini = a[i].u;
                fim = a[i].v;
            }
        }

        printf("%d %d\n", ini, fim);
    }

    printf("\n");

    return 0;
}