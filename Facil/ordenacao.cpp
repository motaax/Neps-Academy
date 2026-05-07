#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> numeros(10);

    for (int i = 0; i < 10; i++) {
        cin >> numeros[i];
    }

    sort(numeros.begin(), numeros.end());

    for (int i = 0; i < 10; i++) {
        cout << numeros[i];

        if (i < 9)
            cout << " ";
    }

    cout << "\n";

    for (int i = 9; i >= 0; i--) {
        cout << numeros[i];

        if (i > 0)
            cout << " ";
    }

    cout << "\n";

    return 0;
}