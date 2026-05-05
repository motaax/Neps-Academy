#include <stdio.h>

int main() {
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);

    for(int i = 0; i < a; i++) {
        printf("%d \n", b);
    }

    return 0;
}