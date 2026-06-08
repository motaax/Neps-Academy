#include <iostream>
#include <string>
using namespace std;

int main() {
    int N, M;
    string P, S;

    cin >> N;
    cin >> P;
    cin >> M;
    cin >> S;

    int tam = min(N, M);
    int resposta = 0;

    for (int i = 0; i < tam; i++) {
        if (P[i] == S[i])
            resposta++;
        else
            break;
    }

    cout << resposta << '\n';

    return 0;
}