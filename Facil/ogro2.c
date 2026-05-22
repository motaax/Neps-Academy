#include <stdio.h>

int main() {
    int e, d;
    
    if (scanf("%d %d", &e, &d) != 2) return 0;
    
    printf("%d\n", e > d ? e + d : 2 * (d - e));
    
    return 0;
}