#include <stdio.h>

int main() {
    long long N;
    long long P, Q, R, S, X, Y;
    long long I, J;

    scanf("%lld", &N);
    scanf("%lld %lld %lld %lld %lld %lld",
          &P, &Q, &R, &S, &X, &Y);
    scanf("%lld %lld", &I, &J);

    long long ans = 0;

    for (long long k = 1; k <= N; k++) {
        long long a = (P * I + Q * k) % X;
        long long b = (R * k + S * J) % Y;
        ans += a * b;
    }

    printf("%lld\n", ans);

    return 0;
}