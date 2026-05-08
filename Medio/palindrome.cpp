#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, teste = 1;

    while (cin >> N && N != 0) {
        string s;
        cin >> s;

        vector<vector<bool>> pal(N, vector<bool>(N, false));

        for (int i = 0; i < N; i++)
            pal[i][i] = true;

        for (int tam = 2; tam <= N; tam++) {
            for (int i = 0; i + tam - 1 < N; i++) {
                int j = i + tam - 1;

                if (s[i] == s[j]) {
                    if (tam == 2)
                        pal[i][j] = true;
                    else
                        pal[i][j] = pal[i + 1][j - 1];
                }
            }
        }

        vector<int> dp(N, INT_MAX);

        for (int i = 0; i < N; i++) {
            if (pal[0][i]) {
                dp[i] = 1;
            } else {
                for (int j = 0; j < i; j++) {
                    if (pal[j + 1][i]) {
                        dp[i] = min(dp[i], dp[j] + 1);
                    }
                }
            }
        }

        cout << "Teste " << teste++ << "\n";
        cout << dp[N - 1] << "\n\n";
    }

    return 0;
}