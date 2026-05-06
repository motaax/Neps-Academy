#include <stdio.h>

int main() {
    int N, P;
    scanf("%d %d", &N, &P);

    int X, Y;
    int convidados = 0;

    for (int i = 0; i < N; i++) {
        scanf("%d %d", &X, &Y);

        if (X + Y >= P) {
            convidados++;
        }
    }

    printf("%d\n", convidados);

    return 0;
}