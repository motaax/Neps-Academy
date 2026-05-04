#include <stdio.h>

int main() {
    int S, M, L;
    
    scanf("%d", &S);
    scanf("%d", &M);
    scanf("%d", &L);

    int felicidade = 1*S + 2*M + 3*L;

    if (felicidade >= 10) {
        printf("happy\n");
    } else {
        printf("sad\n");
    }

    return 0;
}