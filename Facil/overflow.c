#include <stdio.h>

int main() {
    unsigned long long N, P, Q, resultado;
    char C;

    scanf("%llu", &N);
    scanf("%llu %c %llu", &P, &C, &Q);

    if (C == '+') {
        resultado = P + Q;
    } else { 
        resultado = P * Q;
    }

    if (resultado > N) {
        printf("OVERFLOW\n");
    } else {
        printf("OK\n");
    }

    return 0;
}