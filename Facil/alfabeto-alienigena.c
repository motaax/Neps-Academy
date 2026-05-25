#include <stdio.h>
#include <string.h>

int main() {
    int K, N;
    scanf("%d %d", &K, &N);

    char alfabeto[70];
    char mensagem[1005];

    scanf("%s", alfabeto);
    scanf("%s", mensagem);

    int permitido[256] = {0};

    for (int i = 0; i < K; i++) {
        permitido[(unsigned char)alfabeto[i]] = 1;
    }

    for (int i = 0; i < N; i++) {
        if (!permitido[(unsigned char)mensagem[i]]) {
            printf("N\n");
            return 0;
        }
    }

    printf("S\n");

    return 0;
}