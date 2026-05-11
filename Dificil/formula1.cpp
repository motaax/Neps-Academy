#include <iostream>
#include <vector>
using namespace std;

int main() {

    while (true) {

        int G, P;
        cin >> G >> P;

        if (G == 0 && P == 0)
            break;

        vector<vector<int>> resultados(G, vector<int>(P));

        for (int g = 0; g < G; g++) {
            for (int p = 0; p < P; p++) {
                cin >> resultados[g][p];
            }
        }

        int S;
        cin >> S;

        while (S--) {

            int K;
            cin >> K;

            vector<int> pontos(K + 1);

            for (int i = 1; i <= K; i++) {
                cin >> pontos[i];
            }

            vector<int> total(P, 0);

            for (int g = 0; g < G; g++) {

                for (int p = 0; p < P; p++) {

                    int pos = resultados[g][p];

                    if (pos <= K) {
                        total[p] += pontos[pos];
                    }
                }
            }

            int maior = 0;

            for (int p = 0; p < P; p++) {
                maior = max(maior, total[p]);
            }

            bool primeiro = true;

            for (int p = 0; p < P; p++) {

                if (total[p] == maior) {

                    if (!primeiro)
                        cout << " ";

                    cout << (p + 1);

                    primeiro = false;
                }
            }

            cout << endl;
        }
    }

    return 0;
}