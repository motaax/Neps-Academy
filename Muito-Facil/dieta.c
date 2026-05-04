#include <stdio.h>

int main() {
    int N;
    long long M;
    scanf("%d %lld", &N, &M);

    long long total = 0;

    for (int i = 0; i < N; i++) {
        int P, G, C;
        scanf("%d %d %d", &P, &G, &C);

        long long calorias = (P * 4) + (G * 9) + (C * 4);
        total += calorias;
    }

    long long restante = M - total;

    if (restante < 0) {
        restante = 0;
    }

    printf("%lld\n", restante);

    return 0;
}