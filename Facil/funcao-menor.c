#include <stdio.h>

int menor(int a, int b) {
    if(a < b) {
        return a;
    } else {
        return b;
    }
}

int main() {
    int x, y;
    scanf("%d %d", &x, &y);

    printf("%d \n", menor(x, y));

    return 0;
}