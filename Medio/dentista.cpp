#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    vector<pair<int, int>> consultas(N);

    for (int i = 0; i < N; i++) {
        int inicio, fim;
        cin >> inicio >> fim;
        consultas[i] = {fim, inicio};
    }

    sort(consultas.begin(), consultas.end());

    int resposta = 0;
    int ultimoFim = -1;

    for (auto &c : consultas) {
        int fim = c.first;
        int inicio = c.second;

        if (inicio >= ultimoFim) {
            resposta++;
            ultimoFim = fim;
        }
    }

    cout << resposta << '\n';

    return 0;
}