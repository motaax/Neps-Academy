#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    vector<int> pode(N + 1, 0);

    for (int i = 0; i < M; i++) {
        int P, D;
        cin >> P >> D;

        // Para a direita
        for (int pos = P; pos <= N; pos += D)
            pode[pos] = 1;

        // Para a esquerda
        for (int pos = P; pos >= 1; pos -= D)
            pode[pos] = 1;
    }

    for (int i = 1; i <= N; i++)
        cout << pode[i] << '\n';

    return 0;
}