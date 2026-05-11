#include <iostream>
#include <string>
using namespace std;

int main() {
    string n;
    cin >> n;

    int ultimo = n.back() - '0';

    if (ultimo % 2 == 0)
        cout << "S\n";
    else
        cout << "N\n";

    int soma = 0;

    for (char c : n)
        soma += c - '0';

    if (soma % 3 == 0)
        cout << "S\n";
    else
        cout << "N\n";

    if (ultimo == 0 || ultimo == 5)
        cout << "S\n";
    else
        cout << "N\n";

    return 0;
}