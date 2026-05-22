#include <stdio.h>

int main() {
    int a, b, ca, cb;
    
    if (scanf("%d %d", &a, &b) != 2) return 0;
    
    ca = a % 3;
    cb = b % 3;
    
    if (cb == ca) {
        cb = (cb + 1) % 3;
    }
    
    printf("%d\n", 3 - ca - cb);
    
    return 0;
}