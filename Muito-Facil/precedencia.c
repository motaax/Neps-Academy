#include <stdio.h>

int main() {
    int A, B, C;
    scanf("%d", &A);
    scanf("%d", &B);
    scanf("%d", &C);
    
    int resultado = (A + B) / C;
    printf("%d\n", resultado);
    
    return 0;
}