#include <stdio.h>

int main() {
    int N, M, I, R;
    if (scanf("%d %d %d %d", &N, &M, &I, &R) != 4) return 0;

    int infected[10005] = {0}; 

    for (int j = 1; j <= M; j++) {
        int A;
        scanf("%d", &A);
        int p[A];
        int houve_contagio = 0;

        if (j == R) infected[I] = 1;

        for (int i = 0; i < A; i++) {
            scanf("%d", &p[i]);
            if (infected[p[i]]) houve_contagio = 1;
        }

        if (houve_contagio) {
            for (int i = 0; i < A; i++) {
                infected[p[i]] = 1;
            }
        }
    }

    int total = 0;
    for (int i = 1; i <= N; i++) {
        total += infected[i];
    }

    printf("%d\n", total);
    return 0;
}