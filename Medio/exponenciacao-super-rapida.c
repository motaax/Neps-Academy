#include <stdio.h>

long long power(long long base, long long exp, long long mod) {
    long long res = 1;
    base %= mod;
    while (exp > 0) {
        if (exp & 1) res = (res * base) % mod;
        base = (base * base) % mod;
        exp >>= 1;
    }
    return res;
}

char B[100005], E[100005];

int main() {
    long long m, b_mod = 0, ans = 1;
    
    if (scanf("%s %s %lld", B, E, &m) != 3) return 0;

    if (m == 1) {
        printf("0\n");
        return 0;
    }

    for (int i = 0; B[i]; i++) {
        b_mod = (b_mod * 10 + (B[i] - '0')) % m;
    }

    for (int i = 0; E[i]; i++) {
        int digito = E[i] - '0';
        ans = power(ans, 10, m);
        ans = (ans * power(b_mod, digito, m)) % m;
    }

    printf("%lld\n", ans);
    return 0;
}