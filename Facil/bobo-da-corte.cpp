#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int votosCarlos, votos, maior;

    cin >> votosCarlos;
    maior = votosCarlos;

    for (int i = 1; i < N; i++) {
        cin >> votos;

        if (votos > maior) {
            maior = votos;
        }
    }

    if (votosCarlos == maior) {
        cout << "S\n";
    } else {
        cout << "N\n";
    }

    return 0;
}