#include <iostream>
#include <vector>

using namespace std;

void resolver() {
    int n;
    cin >> n;
    vector<int> max_potencias(101, 0);

    while (n--) {
        int g;
        cin >> g;
        for (int d = 2; d <= 100; ++d) {
            int cont = 0;
            while (g % d == 0) {
                cont++;
                g /= d;
            }
            if (cont > max_potencias[d]) max_potencias[d] = cont;
        }
    }

    vector<int> digitos = {1};
    for (int d = 2; d <= 100; ++d) {
        while (max_potencias[d]--) {
            int resto = 0;
            for (int &digito : digitos) {
                int prod = digito * d + resto;
                digito = prod % 10;
                resto = prod / 10;
            }
            while (resto) {
                digitos.push_back(resto % 10);
                resto /= 10;
            }
        }
    }

    for (auto it = digitos.rbegin(); it != digitos.rend(); ++it) {
        cout << *it;
    }
    cout << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (cin >> t) {
        while (t--) resolver();
    }
    return 0;
}