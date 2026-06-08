#include <iostream>
using namespace std;

int main() {
    int N, C;
    cin >> N >> C;

    int total = 0;
    int preco = C;

    for (int i = 0; i < N; i++) {
        total += preco;

        if (preco > 1)
            preco--;
    }

    cout << total << '\n';

    return 0;
}