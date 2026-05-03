#include <stdio.h>
#include <math.h>

int main() {
    int n;
    scanf("%d", &n);

    long double c, sum = 0.0L;

    for (int i = 0; i < n; i++) {
        scanf("%Lf", &c);
        sum += c * c * c;
    }

    long double ans = cbrtl(sum);

    printf("%.10Lf\n", ans);

    return 0;
}