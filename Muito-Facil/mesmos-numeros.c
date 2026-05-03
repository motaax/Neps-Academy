#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int unidade = N % 10;
    int dezena = (N / 10) % 10;

    if (unidade == dezena) {
        printf("1\n");
    } else {
        printf("0\n");
    }

    return 0;
}