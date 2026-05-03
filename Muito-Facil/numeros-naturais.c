#include <stdio.h>

int main() {
    int n, i;
    long long soma = 0;

    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        soma += i;
    }

    printf("%lld\n", soma);

    return 0;
}