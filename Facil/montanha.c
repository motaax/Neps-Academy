#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int A[N];

    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }

    for (int i = 1; i < N - 1; i++) {
        if (A[i - 1] > A[i] && A[i] < A[i + 1]) {
            printf("S\n");
            return 0;
        }
    }

    printf("N\n");

    return 0;
}