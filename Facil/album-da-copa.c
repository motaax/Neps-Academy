#include <stdio.h>

int main() {
    int N, M, X;
    int repetidas[101] = {0};

    scanf("%d", &N);
    scanf("%d", &M);

    for (int i = 0; i < M; i++) {
        scanf("%d", &X);
        repetidas[X] = 1;
    }

    int faltam = 0;

    for (int i = 1; i <= N; i++) {
        if (repetidas[i] == 0) {
            faltam++;
        }
    }

    printf("%d\n", faltam);

    return 0;
}