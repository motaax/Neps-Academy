#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    while (n--) {
        int x;
        scanf("%d", &x);

        char grid[x][11]; // 10 colunas + '\0'

        for (int i = 0; i < x; i++) {
            scanf("%s", grid[i]);
        }

        int found = 0;

        // Percorrer todos os blocos 3x3 possíveis
        for (int i = 0; i <= x - 3; i++) {
            for (int j = 0; j <= 10 - 3; j++) {

                // Padrão 1:
                // #..
                // ...
                // #.#
                if (
                    grid[i][j] == '#' &&
                    grid[i][j+1] == '.' &&
                    grid[i][j+2] == '.' &&

                    grid[i+1][j] == '.' &&
                    grid[i+1][j+1] == '.' &&
                    grid[i+1][j+2] == '.' &&

                    grid[i+2][j] == '#' &&
                    grid[i+2][j+1] == '.' &&
                    grid[i+2][j+2] == '#'
                ) {
                    found = 1;
                }

                // Padrão 2:
                // ..#
                // ...
                // #.#
                if (
                    grid[i][j] == '.' &&
                    grid[i][j+1] == '.' &&
                    grid[i][j+2] == '#' &&

                    grid[i+1][j] == '.' &&
                    grid[i+1][j+1] == '.' &&
                    grid[i+1][j+2] == '.' &&

                    grid[i+2][j] == '#' &&
                    grid[i+2][j+1] == '.' &&
                    grid[i+2][j+2] == '#'
                ) {
                    found = 1;
                }
            }
        }

        if (found)
            printf("T-Spin!!!\n");
        else
            printf("Missed it...\n");
    }

    return 0;
}