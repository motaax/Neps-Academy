#include <stdio.h>

int main() {
    int N, K;
    scanf("%d %d", &N, &K);

    int A[500];

    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }

    for (int i = 0; i < N - 1; i++) {
        for (int j = 0; j < N - 1 - i; j++) {
            if (A[j] < A[j + 1]) {
                int temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
        }
    }

    printf("%d\n", A[K - 1]);

    return 0;
}