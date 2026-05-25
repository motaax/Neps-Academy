#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    long long insensibilidade = 0;

    for (int i = 0; i < N; i++) {
        int x1, y1, x2, y2;

        scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

        int dx = x1 - x2;
        int dy = y1 - y2;

        insensibilidade += dx * dx + dy * dy;
    }

    printf("%lld\n", insensibilidade);

    return 0;
}