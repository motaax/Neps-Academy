#include <iostream>
using namespace std;

int main() {
    int N, S;
    cin >> N >> S;

    int saldo = S;
    int menor = S;

    for (int i = 0; i < N; i++) {
        int mov;
        cin >> mov;

        saldo += mov;
        if (saldo < menor)
            menor = saldo;
    }

    cout << menor << '\n';

    return 0;
}