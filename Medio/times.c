#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char nomes[10005][25];
int habilidade[10005];

char times[1005][10005][25];
int qtdTimes[1005];

void ordenar(int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (habilidade[i] < habilidade[j]) {

                int tempH = habilidade[i];
                habilidade[i] = habilidade[j];
                habilidade[j] = tempH;

                char tempNome[25];
                strcpy(tempNome, nomes[i]);
                strcpy(nomes[i], nomes[j]);
                strcpy(nomes[j], tempNome);
            }
        }
    }
}

void ordenarNomes(char v[][25], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(v[i], v[j]) > 0) {

                char temp[25];
                strcpy(temp, v[i]);
                strcpy(v[i], v[j]);
                strcpy(v[j], temp);
            }
        }
    }
}

int main() {

    int N, T;
    scanf("%d %d", &N, &T);

    for (int i = 0; i < N; i++) {
        scanf("%s %d", nomes[i], &habilidade[i]);
    }

    ordenar(N);

    for (int i = 0; i < N; i++) {

        int time = i % T;

        strcpy(times[time][qtdTimes[time]], nomes[i]);

        qtdTimes[time]++;
    }

    for (int i = 0; i < T; i++) {
        ordenarNomes(times[i], qtdTimes[i]);
    }

    for (int i = 0; i < T; i++) {

        printf("Time %d\n", i + 1);

        for (int j = 0; j < qtdTimes[i]; j++) {
            printf("%s\n", times[i][j]);
        }

        printf("\n");
    }

    return 0;
}