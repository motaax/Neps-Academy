#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int m[1000][1000];
    int somaLinha[1000] = {0};
    int somaColuna[1000] = {0};

    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            scanf("%d", &m[i][j]);
            somaLinha[i] += m[i][j];
            somaColuna[j] += m[i][j];
        }
    }

    int max = 0;

    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            int peso = somaLinha[i] + somaColuna[j] - 2 * m[i][j];
            if(peso > max) {
                max = peso;
            }
        }
    }

    printf("%d\n", max);

    return 0;
}