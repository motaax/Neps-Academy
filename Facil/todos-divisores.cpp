#include <bits/stdc++.h>
using namespace std;

int main() {
    long long X;
    cin >> X;

    vector<long long> divs;

    for (long long i = 1; i * i <= X; i++) {
        if (X % i == 0) {
            divs.push_back(i);
            if (i != X / i) {
                divs.push_back(X / i);
            }
        }
    }

    sort(divs.begin(), divs.end());

    for (int i = 0; i < divs.size(); i++) {
        if (i > 0) cout << " ";
        cout << divs[i];
    }

    cout << endl;
}