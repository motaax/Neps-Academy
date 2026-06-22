#include <stdio.h>

int main() {
    int N, M;
    scanf("%d %d", &N, &M);

    int ultimoPivo = -1;
    int encontrouLinhaZero = 0;

    for (int i = 0; i < N; i++) {
        int pivo = -1;

        for (int j = 0; j < M; j++) {
            int x;
            scanf("%d", &x);

            if (pivo == -1 && x != 0)
                pivo = j;
        }

        if (pivo == -1) {
            encontrouLinhaZero = 1;
        } else {
            if (encontrouLinhaZero || pivo <= ultimoPivo) {
                printf("N\n");
                return 0;
            }
            ultimoPivo = pivo;
        }
    }

    printf("S\n");
    return 0;
}