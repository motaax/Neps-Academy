#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int fact[10];
    fact[0] = 1;

    int i = 1;
    while (i < 10 && fact[i - 1] * i <= N) {
        fact[i] = fact[i - 1] * i;
        i++;
    }

    int count = 0;

    for (int j = i - 1; j >= 0; j--) {
        if (fact[j] <= N) {
            count += N / fact[j];
            N %= fact[j];
        }
    }

    printf("%d\n", count);
    return 0;
}