#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector <int> freq(m + 1);

    int x;
    for(int i = 0; i < n; i++) {
        cin >> x;
        freq[x]++;
    }

    int maior = 0;
    for(int i = 1; i <= m; i++) {
        maior = max(maior, freq[i]);
    }

    cout << maior << "\n";

}