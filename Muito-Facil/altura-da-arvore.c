#include <stdio.h>

int main() {
    long long X;
    scanf("%lld", &X);

    long long h[7];

    h[1] = 1;
    h[2] = 2;
    h[3] = 4;
    h[4] = 5;
    h[5] = 7;
    h[6] = 13;

    if (X <= 6) {
        printf("%lld\n", h[X]);
    } else {
        long long d = h[6] - h[5]; // 6
        long long altura = h[6] + (X - 6) * d;
        printf("%lld\n", altura);
    }

    return 0;
}