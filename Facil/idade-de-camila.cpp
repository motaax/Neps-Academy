#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    int idades[3] = {a, b, c};

    sort(idades, idades + 3);

    cout << idades[1] << "\n";

}