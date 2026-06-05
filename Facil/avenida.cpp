#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int D;
    cin >> D;

    int resposta = 2000;

    for (int ponto = 0; ponto <= 2000; ponto += 400) {
        resposta = min(resposta, abs(D - ponto));
    }

    cout << resposta << endl;

    return 0;
}