#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXQ 100000
#define MAXS 101

char hashes[MAXQ][MAXS];

int compara(const void *a, const void *b) {
    return strcmp((char *)a, (char *)b);
}

int main() {
    int Q;
    scanf("%d", &Q);

    for (int i = 0; i < Q; i++) {
        scanf("%s", hashes[i]);
    }

    qsort(hashes, Q, sizeof(hashes[0]), compara);

    for (int i = 1; i < Q; i++) {
        if (strcmp(hashes[i], hashes[i - 1]) == 0) {
            printf("A funcao nao eh boa.\n");
            return 0;
        }
    }

    printf("A funcao eh boa.\n");

    return 0;
}