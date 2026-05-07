#include <bits/stdc++.h>
using namespace std;

int main() {
    int lar1, alt1, lar2, alt2;
    cin >> lar1 >> alt1 >> lar2 >> alt2;

    int area1 = lar1 * alt1;
    int area2 = lar2 * alt2;

    if(area1 > area2) {
        cout << "Primeiro";
    } else if (area2 > area1) {
        cout << "Segundo";
    } else {
        cout << "Empate";
    }

    return 0;
}