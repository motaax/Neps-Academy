#include <bits/stdc++.h>
using namespace std;

struct Estado {
    int especiais;
    int tamanho;   
};

const int MAXN = 2005;

Estado dp[MAXN][MAXN];

int main() {
    string s;
    cin >> s;

    int n = s.size();

    vector<int> especial(n, 0);

    int k;
    cin >> k;

    for (int i = 0; i < k; i++) {
        int pos;
        cin >> pos;
        especial[pos - 1] = 1;
    }

    for (int i = 0; i < n; i++) {
        dp[i][i].especiais = especial[i];
        dp[i][i].tamanho = 1;
    }

    for (int len = 2; len <= n; len++) {
        for (int i = 0; i + len - 1 < n; i++) {
            int j = i + len - 1;

            Estado melhor = {0, 0};

            Estado a = dp[i + 1][j];
            melhor = a;

            Estado b = dp[i][j - 1];

            if (b.especiais > melhor.especiais ||
               (b.especiais == melhor.especiais &&
                b.tamanho > melhor.tamanho)) {
                melhor = b;
            }

            if (s[i] == s[j]) {
                Estado c;

                if (i + 1 > j - 1) {
                    c.especiais = especial[i] + especial[j];
                    c.tamanho = 2;
                } else {
                    c.especiais =
                        dp[i + 1][j - 1].especiais +
                        especial[i] + especial[j];

                    c.tamanho =
                        dp[i + 1][j - 1].tamanho + 2;
                }

                if (c.especiais > melhor.especiais ||
                   (c.especiais == melhor.especiais &&
                    c.tamanho > melhor.tamanho)) {
                    melhor = c;
                }
            }

            dp[i][j] = melhor;
        }
    }

    cout << dp[0][n - 1].tamanho << endl;

    return 0;
}