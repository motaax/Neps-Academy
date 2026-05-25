#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int notas[101] = {0};

    for (int i = 0; i < N; i++) {
        int nota;
        scanf("%d", &nota);
        notas[nota]++;
    }

    int maiorFreq = 0;
    int resposta = 0;

    for (int i = 0; i <= 100; i++) {
        if (notas[i] > maiorFreq || 
           (notas[i] == maiorFreq && i > resposta)) {
            maiorFreq = notas[i];
            resposta = i;
        }
    }

    printf("%d\n", resposta);

    return 0;
}