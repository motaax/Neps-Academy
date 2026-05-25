#include <stdio.h>
#include <string.h>

int main() {
    int N, K;
    char nomes[100][21], temp[21];

    scanf("%d %d", &N, &K);

    for (int i = 0; i < N; i++) {
        scanf("%s", nomes[i]);
    }

    for (int i = 0; i < N - 1; i++) {
        for (int j = i + 1; j < N; j++) {
            if (strcmp(nomes[i], nomes[j]) > 0) {
                strcpy(temp, nomes[i]);
                strcpy(nomes[i], nomes[j]);
                strcpy(nomes[j], temp);
            }
        }
    }

    printf("%s\n", nomes[K - 1]);

    return 0;
}