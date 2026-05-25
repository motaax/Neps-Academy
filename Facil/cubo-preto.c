#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int zero, uma, duas, tres;

    zero = (N - 2) * (N - 2) * (N - 2);

    uma = 6 * (N - 2) * (N - 2);

    duas = 12 * (N - 2);

    tres = 8;

    printf("%d\n", zero);
    printf("%d\n", uma);
    printf("%d\n", duas);
    printf("%d\n", tres);

    return 0;
}