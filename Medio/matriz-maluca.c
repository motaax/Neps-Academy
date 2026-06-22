#include <stdio.h>

int main() {
    int N, M, P;
    scanf("%d %d %d", &N, &M, &P);

    int mat[20][20];

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    long long enzo = 0, lobo = 0;

    for (int jog = 0; jog < P; jog++) {
        int l, c;
        scanf("%d %d", &l, &c);

        l--;
        c--;

        long long pontos = 0;

        for (int j = 0; j < M; j++)
            pontos += mat[l][j];

        for (int i = 0; i < N; i++)
            if (i != l)
                pontos += mat[i][c];

        for (int j = 0; j < M; j++)
            mat[l][j] = 0;

        for (int i = 0; i < N; i++)
            mat[i][c] = 0;

        if (jog % 2 == 0)
            enzo += pontos;
        else
            lobo += pontos;
    }

    if (enzo > lobo)
        printf("Enzo\n");
    else if (lobo > enzo)
        printf("Lobo\n");
    else
        printf("Empate\n");

    return 0;
}