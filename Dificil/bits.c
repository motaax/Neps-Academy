#include <stdio.h>

int main() {
    int n, k;
    if (scanf("%d %d", &n, &k) != 2) return 0;
    
    long long dp[1005] = {1}; 
    long long mod = 1000000007;
    
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i && j <= k; j++) {
            dp[i] = (dp[i] + dp[i - j]) % mod;
        }
        if (i < k) {
            dp[i] = (dp[i] + 1) % mod;
        }
    }
    
    printf("%lld\n", dp[n]);
    
    return 0;
}