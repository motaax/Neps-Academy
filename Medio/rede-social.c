#include <stdio.h>
#include <stdlib.h>

#define MAX 500000

int R[MAX];

int compara(const void *a, const void *b) {
    return (*(int *)b - *(int *)a); 
}

int main() {
    int N;
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        scanf("%d", &R[i]);
    }

    qsort(R, N, sizeof(int), compara);

    int FI = 0;

    for (int i = 0; i < N; i++) {
        if (R[i] >= i + 1) {
            FI = i + 1;
        } else {
            break;
        }
    }

    printf("%d\n", FI);

    return 0;
}