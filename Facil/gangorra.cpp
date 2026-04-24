#include <iostream>
using namespace std;

int main() {
    long long P1, C1, P2, C2;
    cin >> P1 >> C1 >> P2 >> C2;

    long long esquerda = P1 * C1;
    long long direita = P2 * C2;

    if (esquerda == direita) {
        cout << 0 << endl;
    } else if (esquerda > direita) {
        cout << -1 << endl;
    } else {
        cout << 1 << endl;
    }

}