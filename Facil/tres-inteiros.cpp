#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    int qntd1 = 0, qntd2 = 0;

    if(a == 1) {
        qntd1++;
    } else {
        qntd2++;
    }

    if(b == 1) {
        qntd1++;
    } else {
        qntd2++;
    }

    if(c == 1) {
        qntd1++;
    } else {
        qntd2++;
    }

    if(qntd1 > qntd2) {
        cout << 1 << "\n";
    } else {
        cout << 2 << "\n";
    }

    return 0;
}