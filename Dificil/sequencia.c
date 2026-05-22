#include <stdio.h>

long long S[100005];

int main() {
    int n, l, h;
    if (scanf("%d %d %d", &n, &l, &h) != 3) return 0;

    for (int i = 0; i < n; i++) {
        scanf("%lld", &S[i]);
    }

    long long dp[25], next_dp[25];
    const long long INF = -1000000000000000LL; 

    for (int i = 0; i <= h; i++) dp[i] = INF;

    long long ans = (l == 0) ? 0 : INF;

    for (int i = 0; i < n; i++) {
        int m;
        scanf("%d", &m);

        for (int k = 0; k <= h; k++) next_dp[k] = INF;

        if (m == 0) {
            next_dp[0] = dp[0] + S[i];
            if (S[i] > next_dp[0]) next_dp[0] = S[i];
            
            for (int k = 1; k <= h; k++) {
                if (dp[k] != INF) next_dp[k] = dp[k] + S[i];
            }
        } else {
            next_dp[1] = dp[0] + S[i];
            if (S[i] > next_dp[1]) next_dp[1] = S[i];
            
            for (int k = 2; k <= h; k++) {
                if (dp[k - 1] != INF) next_dp[k] = dp[k - 1] + S[i];
            }
        }

        for (int k = 0; k <= h; k++) {
            dp[k] = next_dp[k];
            if (k >= l && dp[k] > ans) {
                ans = dp[k];
            }
        }
    }

    printf("%lld\n", ans);
    return 0;
}