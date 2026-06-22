#include <stdio.h>

#define MOD 1000000007

int main() {
    int n, m;
    
    if (scanf("%d %d", &n, &m) != 2) return 0;

    char grid[105][105];
    for (int i = 0; i < n; i++) {
        scanf("%s", grid[i]);
    }

    int L[105], R[105];
    
    for (int i = 0; i < n; i++) {
        L[i] = 0;
        R[i] = m;
        for (int j = 0; j < m; j++) {
            if (grid[i][j] == '1') {
                if (j + 1 > L[i]) {
                    L[i] = j + 1;
                }
            } else if (grid[i][j] == '0') {
                if (j < R[i]) {
                    R[i] = j;
                }
            }
        }
        
        if (L[i] > R[i]) {
            printf("0\n");
            return 0;
        }
    }

    int dp[105] = {0};
    
    for (int c = L[0]; c <= R[0]; c++) {
        dp[c] = 1;
    }

    for (int i = 1; i < n; i++) {
        int next_dp[105] = {0};
        int suff_sum = 0;
        
        for (int c = m; c >= 0; c--) {
            suff_sum = (suff_sum + dp[c]) % MOD;
            
            if (c >= L[i] && c <= R[i]) {
                next_dp[c] = suff_sum;
            }
        }
        
        for (int c = 0; c <= m; c++) {
            dp[c] = next_dp[c];
        }
    }

    int ans = 0;
    for (int c = 0; c <= m; c++) {
        ans = (ans + dp[c]) % MOD;
    }

    printf("%d\n", ans);

    return 0;
}