#include <stdio.h>

int main() {
    int N, K;
    
    scanf("%d", &N);
    scanf("%d", &K);

    int quota = K + 60;
    int custo;

    if (N <= quota) {
        custo = N * 1500;
    } else {
        custo = quota * 1500 + (N - quota) * 3000;
    }

    printf("%d\n", custo);

    return 0;
}