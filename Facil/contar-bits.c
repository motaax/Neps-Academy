#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int count = 0;

    while (N > 0) {
        if (N % 2 == 1)
            count++;
        N = N / 2;
    }

    printf("%d\n", count);

    return 0;
}