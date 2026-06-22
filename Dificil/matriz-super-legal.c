#include <stdio.h>

#define MAXN 1005

int A[MAXN][MAXN];
int H[MAXN];
int stack[MAXN];

int main() {
    int L, C;

    if (scanf("%d %d", &L, &C) != 2) return 0;

    for (int i = 0; i < L; i++) {
        for (int j = 0; j < C; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    if (L < 2 || C < 2) {
        printf("%d\n", (L > C ? L : C));
        return 0;
    }

    long long max_elements = (L > C ? L : C);

    for (int i = 0; i < L - 1; i++) {

        for (int j = 0; j < C - 1; j++) {

            long long lhs = (long long)A[i][j] + A[i + 1][j + 1];
            long long rhs = (long long)A[i][j + 1] + A[i + 1][j];

            if (lhs <= rhs) {
                H[j]++;
            } else {
                H[j] = 0;
            }
        }

        int top = -1;

        for (int j = 0; j <= C - 1; j++) {

            int h = (j == C - 1) ? 0 : H[j];

            while (top >= 0 && H[stack[top]] > h) {

                int height = H[stack[top--]];
                int width = (top == -1) ? j : (j - 1 - stack[top]);

                long long area = (long long)(height + 1) * (width + 1);

                if (area > max_elements) {
                    max_elements = area;
                }
            }

            stack[++top] = j;
        }
    }

    printf("%lld\n", max_elements);

    return 0;
}