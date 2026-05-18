#include <iostream>
using namespace std;

int calcularPontuacao(int a, int b) {
    int soma = a + b;

    if (a == b) {
        return 2 * soma;
    }

    if (abs(a - b) == 1) {
        return 3 * soma;
    }

    return soma;
}

int main() {
    int l1, l2, c1, c2;

    cin >> l1 >> l2 >> c1 >> c2;

    int pontosLia = calcularPontuacao(l1, l2);
    int pontosCarolina = calcularPontuacao(c1, c2);

    if (pontosLia > pontosCarolina) {
        cout << "Lia" << endl;
    } else if (pontosCarolina > pontosLia) {
        cout << "Carolina" << endl;
    } else {
        cout << "empate" << endl;
    }

    return 0;
}