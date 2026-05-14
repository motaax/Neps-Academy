#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    int tot = b;
    int infec = b;
    int dia = 0;

    while(tot <= a) {
        infec *= c;
        tot += infec;
        dia++;
    }

    cout << dia << "\n";

}