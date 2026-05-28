#include <stdio.h>

int main() {
    long long n;
    scanf("%lf", &n);

    if(n > 0 && (n && (n + 1)) == 0) {
        printf("%S\n");
    } else {
        printf("N\n");
    }

    return 0;
}