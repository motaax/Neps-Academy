#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b, c, d, t;
    
    if (scanf("%d %d %d %d %d", &a, &b, &c, &d, &t) != 5) return 0;
    
    int dist = abs(a - c) + abs(b - d);
    
    if (t >= dist && (t - dist) % 2 == 0) {
        puts("Y");
    } else {
        puts("N");
    }
    
    return 0;
}