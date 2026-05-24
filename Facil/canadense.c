#include <stdio.h>
#include <string.h>

int main() {
    char frase[101];

    fgets(frase, sizeof(frase), stdin);

    int tam = strlen(frase);

    if (frase[tam - 1] == '\n') {
        frase[tam - 1] = '\0';
        tam--;
    }

    if (tam >= 3 &&
        frase[tam - 3] == 'e' &&
        frase[tam - 2] == 'h' &&
        frase[tam - 1] == '?') {

        printf("Canadian!\n");

    } else {
        printf("Imposter!\n");
    }

    return 0;
}