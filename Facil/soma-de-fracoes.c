#include <stdio.h>

typedef long long ll;

ll mdc(ll a, ll b) {
    while(b != 0) {
        ll t = a % b;
        a = b;
        b = t;
    }

    return a;
}

int main() {
    ll n1, d1, n2, d2;
    scanf("%lld %lld %lld %lld", &n1, &d1, &n2, &d2);

    ll numerador = n1 * d2 + n2 * d1;
    ll denominador = d1 * d2;

    ll g = mdc(numerador, denominador);

    numerador /= g;
    denominador /= g;

    printf("%lld %lld \n", numerador, denominador);

    return 0;
}