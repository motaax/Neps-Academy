#include <stdio.h>

int main() {
    int N, M;
    
    scanf("%d", &N);
    
    int fila[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &fila[i]);
    }
    
    scanf("%d", &M);
    
    int saiu[100001] = {0};
    
    for (int i = 0; i < M; i++) {
        int x;
        scanf("%d", &x);
        saiu[x] = 1;
    }
    
    for (int i = 0; i < N; i++) {
        if (!saiu[fila[i]]) {
            printf("%d ", fila[i]);
        }
    }
    
    printf("\n");
    
    return 0;
}