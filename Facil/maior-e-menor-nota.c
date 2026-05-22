#include <stdio.h>

int main() {
    int n, nota;
    int min = 101, max = -1; 
    
    if (scanf("%d", &n) != 1) return 0;
    
    while (n--) {
        scanf("%d", &nota);
        if (nota < min) min = nota;
        if (nota > max) max = nota;
    }
    
    printf("%d %d\n", min, max);
    
    return 0;
}