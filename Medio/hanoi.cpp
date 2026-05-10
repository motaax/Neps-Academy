#include <iostream>
using namespace std;

long long hanoi(int n) {

    // Caso base
    if (n == 1) {
        return 1;
    }

    return 2 * hanoi(n - 1) + 1;
}

int main() {

    int n;
    int teste = 1;

    while (cin >> n && n != 0) {

        cout << "Teste " << teste << endl;
        cout << hanoi(n) << endl << endl;

        teste++;
    }

    return 0;
}