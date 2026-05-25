#include <stdio.h>

int main() {
    int N, Q, i, j, x;
    
    scanf("%d", &N);
    
    int lista[N];
    
    for(i = 0; i < N; i++) {
        scanf("%d", &lista[i]);
    }
    
    scanf("%d", &Q);
    
    for(i = 0; i < Q; i++) {
        scanf("%d", &x);
        
        int encontrou = 0;
        
        for(j = 0; j < N; j++) {
            if(lista[j] == x) {
                encontrou = 1;
                break;
            }
        }
        
        if(encontrou) {
            printf("Sim\n");
        } else {
            printf("Nao\n");
        }
    }
    
    return 0;
}