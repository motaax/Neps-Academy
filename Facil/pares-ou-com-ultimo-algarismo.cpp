#include <iostream>
using namespace std;

bool valido(int n) {
    return (n % 2 == 0) || (abs(n) % 10 == 5);
}

int main() {
    int X, Y, Z;
    cin >> X >> Y >> Z;

    int contador = 0;

    if (valido(X)) contador++;
    if (valido(Y)) contador++;
    if (valido(Z)) contador++;

    cout << contador << "\n";

    return 0;
}