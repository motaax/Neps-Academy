#include <stdio.h>

int main() {
    int N, D, M, P;
    
    scanf("%d %d %d %d", &N, &D, &M, &P);
    
    int dano_antigo = N * D;
    int dano_novo = M * P;
    
    if (dano_novo > dano_antigo) {
        printf("BUFF\n");
    } else {
        printf("NERF\n");
    }
    
    return 0;
}