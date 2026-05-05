#include <stdio.h>

int main() {
    double x, y;
    scanf("%lf %lf", &x, &y);

    x /= 100.0;
    y /= 100.0;

    double k = (x * (1.0 - y)) / (y * (1.0 - x));

    printf("%.6lf\n", k);

    return 0;
}