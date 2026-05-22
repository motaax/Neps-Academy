#include <stdio.h>
#include <stdlib.h>

int *pai;

int buscar(int x) {
    return pai[x] == x ? x : (pai[x] = buscar(pai[x]));
}

int main() {
    int n, r, l, count = 0;
    
    if (scanf("%d %d", &n, &r) != 2) return 0;

    pai = malloc((n + 1) * sizeof(int));
    for (int i = 0; i <= n; i++) pai[i] = i;

    for (int i = 0; i < r; i++) {
        scanf("%d", &l);
        if (l > n) l = n; 
        
        int andar = buscar(l);
        
        if (andar == 0) {
            break; 
        }
        
        pai[andar] = buscar(andar - 1);
        count++;
    }

    printf("%d\n", count);
    
    free(pai);
    return 0;
}