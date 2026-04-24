#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    char op;
    double a, b;

    cin >> op;
    cin >> a >> b;

    double resultado;

    if (op == 'M') {
        resultado = a * b;
    } else if (op == 'D') {
        resultado = a / b;
    }

    cout << fixed << setprecision(2) << resultado << "\n";

}