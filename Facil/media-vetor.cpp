#include <bits/stdc++.h>    
using namespace std;

int main() {
    int n;
    cin >> n;

    vector <double> v(n);
    double soma = 0;

    for (int i = 0; i < n; i++) {
        cin >> v[i];
        soma += v[i];
    }

    double media = soma / n;

    cout << fixed << setprecision(2) << media << "\n";

    return 0;
}