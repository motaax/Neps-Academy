#include <stdio.h>

int main() {
    int L, A;
    
    scanf("%d %d", &L, &A);

    int area = L * A;
    int perimetro = 2 * (L + A);

    printf("%d\n", area);
    printf("%d\n", perimetro);

    return 0;
}