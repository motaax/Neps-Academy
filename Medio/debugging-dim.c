#include <stdio.h>

int n, k;
long long L[1000][10], H[1000][10];
int ok[1000];

int pode_verificar(int a, int b) {
    for(int i = 0; i < k; i++) {
        if(H[a][i] < L[b][i]) return 0;
    }
    return 1;
}

int main() {
    scanf("%d %d", &n, &k);

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < k; j++)
            scanf("%lld", &L[i][j]);
        for(int j = 0; j < k; j++)
            scanf("%lld", &H[i][j]);
    }

    for(int i = 0; i < n; i++) {
        int pode = 1;
        for(int j = 0; j < k; j++) {
            if(L[i][j] > 0) {
                pode = 0;
                break;
            }
        }
        if(pode) ok[i] = 1;
    }

    int mudou = 1;
    while(mudou) {
        mudou = 0;
        for(int i = 0; i < n; i++) {
            if(ok[i]) continue;

            for(int j = 0; j < n; j++) {
                if(ok[j] && pode_verificar(j, i)) {
                    ok[i] = 1;
                    mudou = 1;
                    break;
                }
            }
        }
    }

    int resp = 0;
    for(int i = 0; i < n; i++) {
        if(ok[i]) resp++;
    }

    printf("%d\n", resp);

    return 0;
}