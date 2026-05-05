#include <stdio.h>
#include <math.h>

int main() {
    int N;
    scanf("%d", &N);

    double x;

    for(int i = 0; i < N; i++) {
        scanf("%lf", &x);
        printf("%.4lf\n", sqrt(x));
    }

    return 0;
}