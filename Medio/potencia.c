#include <stdio.h>

int potencia(int base, int expoente) {
    int resultado = 1;

    for (int i = 0; i < expoente; i++) {
        resultado *= base;
    }

    return resultado;
}

int main() {
    int N, T;
    int soma = 0;

    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        scanf("%d", &T);

        int expoente = T % 10;
        int base = T / 10;     

        soma += potencia(base, expoente);
    }

    printf("%d\n", soma);

    return 0;
}