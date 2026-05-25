#include <stdio.h>

#define MAXN 100000
#define MAXM 10000

int A[MAXN];
int F[MAXN];
int O[MAXM];

int main() {
    int N, M;
    scanf("%d %d", &N, &M);

    for (int i = 0; i < N - 1; i++) {
        scanf("%d", &A[i]);
    }

    for (int i = 0; i < N; i++) {
        scanf("%d", &F[i]);
    }

    for (int i = 0; i < M; i++) {
        scanf("%d", &O[i]);
    }

    for (int i = 0; i < M; i++) {
        int x = O[i];

        int left = 0, right = N - 2;
        int ans = N - 1;

        while (left <= right) {
            int mid = (left + right) / 2;

            if (x < A[mid]) {
                ans = mid;
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }

        printf("%d", F[ans]);

        if (i < M - 1)
            printf(" ");
    }

    printf("\n");

    return 0;
}