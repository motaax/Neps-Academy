#include <stdio.h>

int main() {
    int N;
    long long fatorial = 1;

    scanf("%d", &N);

    for(int i = 1; i <= N; i++) {
        fatorial *= i;
    }

    printf("%lld\n", fatorial);

    return 0;
}