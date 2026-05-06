#include <stdio.h>

typedef struct {
    int nota;
    int peso;
} Prova;

int main() {
    Prova provas[3];

    int soma = 0, pesos = 0;

    for (int i = 0; i < 3; i++) {
        scanf("%d %d", &provas[i].nota, &provas[i].peso);
    }

    for (int i = 0; i < 3; i++) {
        soma += provas[i].nota * provas[i].peso;
        pesos += provas[i].peso;
    }

    int media = soma / pesos;

    printf("%d\n", media);

    return 0;
}