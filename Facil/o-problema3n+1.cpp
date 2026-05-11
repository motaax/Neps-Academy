#include <iostream>

using namespace std;

int main() {
    long long n;
    int contador = 0;

    if (!(cin >> n)) return 0;

    while (n > 1) {
        if (n % 2 == 0) {
            n /= 2;
        } else {
            n = 3 * n + 1;
        }
        contador++;
    }

    cout << contador << endl;

    return 0;
}