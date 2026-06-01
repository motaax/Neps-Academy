#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> dp(N + 1);
    for (int i = 1; i <= N; i++) {
        dp[i] = 1e9;
        for (int x = i; x; x /= 10) {
            int d = x % 10;
            if (d) dp[i] = min(dp[i], dp[i - d] + 1);
        }
    }

    cout << dp[N] << '\n';
}