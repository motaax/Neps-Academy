#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int S;
string num;
ll memo[20][200][2][2];

ll dp(int pos, int soma, bool tight, bool started) {
    if (soma > S) return 0;

    if (pos == (int)num.size()) {
        return (soma == S);
    }

    ll &res = memo[pos][soma][tight][started];

    if (res != -1 && !tight)
        return res;

    ll ans = 0;

    int limite = tight ? (num[pos] - '0') : 9;

    for (int d = 0; d <= limite; d++) {
        ans += dp(
            pos + 1,
            soma + d,
            tight && (d == limite),
            started || d != 0
        );
    }

    if (!tight)
        res = ans;

    return ans;
}

ll solve(ll x) {
    if (x < 0) return 0;

    num = to_string(x);

    memset(memo, -1, sizeof(memo));

    return dp(0, 0, 1, 0);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll A, B;

    cin >> S;
    cin >> A;
    cin >> B;

    cout << solve(B) - solve(A - 1) << '\n';

    return 0;
}