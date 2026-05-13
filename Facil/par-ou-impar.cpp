#include <iostream>
using namespace std;

int main() {
    int N, teste = 1;

    while (cin >> N && N != 0) {
        string jogador1, jogador2;
        cin >> jogador1 >> jogador2;

        cout << "Teste " << teste++ << "\n";

        for (int i = 0; i < N; i++) {
            int A, B;
            cin >> A >> B;

            if ((A + B) % 2 == 0)
                cout << jogador1 << "\n";
            else
                cout << jogador2 << "\n";
        }

        cout << "\n";
    }

    return 0;
}