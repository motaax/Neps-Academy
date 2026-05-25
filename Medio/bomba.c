#include <stdio.h>

#define MAX 1005

char mapa[MAX][MAX];
int R, C;

int contarInimigos(int r, int c) {
    int total = 0;

    for (int i = r - 1; i >= 0; i--) {
        if (mapa[i][c] == '#') break;
        if (mapa[i][c] == '@') total++;
    }

    for (int i = r + 1; i < R; i++) {
        if (mapa[i][c] == '#') break;
        if (mapa[i][c] == '@') total++;
    }

    for (int j = c - 1; j >= 0; j--) {
        if (mapa[r][j] == '#') break;
        if (mapa[r][j] == '@') total++;
    }

    for (int j = c + 1; j < C; j++) {
        if (mapa[r][j] == '#') break;
        if (mapa[r][j] == '@') total++;
    }

    return total;
}

int main() {
    int N;
    scanf("%d", &N);

    while (N--) {
        scanf("%d %d", &R, &C);

        for (int i = 0; i < R; i++) {
            scanf("%s", mapa[i]);
        }

        int melhorR = -1;
        int melhorC = -1;
        int maxInimigos = -1;

        for (int i = 0; i < R; i++) {
            for (int j = 0; j < C; j++) {

                if (mapa[i][j] == '.') {
                    int mortos = contarInimigos(i, j);

                    if (mortos > maxInimigos) {
                        maxInimigos = mortos;
                        melhorR = i;
                        melhorC = j;
                    }
                }
            }
        }

        printf("%d, %d\n", melhorR, melhorC);
    }

    return 0;
}