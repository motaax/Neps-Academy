#include <stdio.h>

int main() {
    int P, D1, D2;
    
    scanf("%d", &P);
    scanf("%d", &D1);
    scanf("%d", &D2);

    int soma = D1 + D2;

    if (soma % 2 == 0) {
        printf("%d\n", P);
    } else {
        printf("%d\n", 1 - P);
    }

    return 0;
}