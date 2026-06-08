#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    int menor;
    cin >> menor;

    for (int i = 1; i < N; i++) {
        int x;
        cin >> x;
        menor = min(menor, x);
    }

    cout << menor << '\n';

    return 0;
}