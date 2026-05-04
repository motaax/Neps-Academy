#include <stdio.h>

int main() {
    int A, B;

    scanf("%d", &A);
    scanf("%d", &B);

    if (A < B) {
        printf("-1\n");
    } else if (A == B) {
        printf("0\n");
    } else {
        printf("1\n");
    }

    return 0;
}