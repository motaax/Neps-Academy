#include <stdio.h>

int main() {
    int A, B;

    while (scanf("%d %d", &A, &B) == 2) {

        int alice[100001] = {0};
        int beatriz[100001] = {0};

        int x, y;

        // Cartas da Alice
        for (int i = 0; i < A; i++) {
            scanf("%d", &x);
            alice[x] = 1;
        }

        // Cartas da Beatriz
        for (int i = 0; i < B; i++) {
            scanf("%d", &y);
            beatriz[y] = 1;
        }

        int soAlice = 0;
        int soBeatriz = 0;

        // Verifica diferenças
        for (int i = 1; i <= 100000; i++) {
            if (alice[i] && !beatriz[i])
                soAlice++;

            if (beatriz[i] && !alice[i])
                soBeatriz++;
        }

        // Máximo de trocas
        if (soAlice < soBeatriz)
            printf("%d\n", soAlice);
        else
            printf("%d\n", soBeatriz);
    }

    return 0;
}