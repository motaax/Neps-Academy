#include <stdio.h>

long long mdc(long long a, long long b) {
    while (b != 0) {
        long long temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    long long A, B, C, D;
    
    scanf("%lld %lld %lld %lld", &A, &B, &C, &D);

    long long numerador = A * D + C * B;
    long long denominador = B * D;

    long long divisor = mdc(numerador, denominador);

    numerador /= divisor;
    denominador /= divisor;

    printf("%lld %lld\n", numerador, denominador);

    return 0;
}