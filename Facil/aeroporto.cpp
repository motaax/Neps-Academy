#include <iostream>
#include <vector>
using namespace std;

int main() {
    int A, V;
    int teste = 1;

    while (cin >> A >> V && !(A == 0 && V == 0)) {
        vector<int> trafego(A + 1, 0);

        for (int i = 0; i < V; i++) {
            int X, Y;
            cin >> X >> Y;

            trafego[X]++;
            trafego[Y]++;
        }

        int maximo = 0;
        for (int i = 1; i <= A; i++) {
            if (trafego[i] > maximo)
                maximo = trafego[i];
        }

        cout << "Teste " << teste++ << "\n";

        bool primeiro = true;
        for (int i = 1; i <= A; i++) {
            if (trafego[i] == maximo) {
                if (!primeiro) cout << ' ';
                cout << i;
                primeiro = false;
            }
        }

        cout << "\n\n";
    }

    return 0;
}