#include <stdio.h>

int main() {
    int N, x;
    int pilha[100000];
    int topo = 0; 

    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        scanf("%d", &x);

        if (x == 0) {
            if (topo > 0) {
                topo--; 
            }
        } else {
            pilha[topo] = x;
            topo++; 
        }
    }

    int soma = 0;
    for (int i = 0; i < topo; i++) {
        soma += pilha[i];
    }

    printf("%d\n", soma);

    return 0;
}