#include <iostream>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;

    int resultado = (A + B) % 12;

    if (resultado == 0)
        resultado = 12;

    cout << resultado << endl;

    return 0;
}