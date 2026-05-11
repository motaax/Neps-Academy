#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, q;
    if (!(cin >> n >> q)) return 0;

    vector<long long> c(n);
    for (int i = 0; i < n; ++i) {
        cin >> c[i];
    }

    sort(c.begin(), c.end());

    vector<long long> pref(n + 1, 0);
    for (int i = 0; i < n; ++i) {
        pref[i + 1] = pref[i] + c[i];
    }

    while (q--) {
        long long k, m;
        cin >> k >> m;

        int p = lower_bound(c.begin(), c.end(), k) - c.begin();

        int x_min = max(0LL, m - (n - p));
        int x_max = min((long long)p, m);
        int low = x_min, high = x_max - 1;
        int x = x_max; 
        
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (c[mid] + c[n - m + mid] >= 2 * k) {
                x = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        long long soma_menores = pref[x];
        long long soma_maiores = pref[n] - pref[n - (m - x)];
        long long resultado = soma_menores + (m - x) * 2 * k - soma_maiores;

        cout << resultado << "\n";
    }

    return 0;
}