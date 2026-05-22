#include <stdio.h>

int main() {
    int n, c = 0, f[] = {40320, 5040, 720, 120, 24, 6, 2, 1};
    
    scanf("%d", &n);
    
    for (int i = 0; i < 8; i++) {
        c += n / f[i];
        n %= f[i];
    }
    
    printf("%d\n", c);
    return 0;
}