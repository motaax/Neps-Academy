#include <iostream>
#include <string>
using namespace std;

int main() {
    string n;
    cin >> n;

    int tam = n.size();

    int ult2;

    if (tam == 1)
        ult2 = n[0] - '0';
    else
        ult2 = (n[tam - 2] - '0') * 10 + (n[tam - 1] - '0');

    if (ult2 % 4 == 0)
        cout << "S\n";
    else
        cout << "N\n";

    int soma = 0;

    for (char c : n)
        soma += c - '0';

    if (soma % 9 == 0)
        cout << "S\n";
    else
        cout << "N\n";

    if (tam == 1)
        ult2 = n[0] - '0';
    else
        ult2 = (n[tam - 2] - '0') * 10 + (n[tam - 1] - '0');

    if (ult2 == 0 || ult2 == 25 || ult2 == 50 || ult2 == 75)
        cout << "S\n";
    else
        cout << "N\n";

    return 0;
}