#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int N;
    cin >> N;

    double menor = 1e18;

    for (int i = 0; i < N; i++) {
        double P;
        int G;

        cin >> P >> G;

        double precoKg = (P * 1000.0) / G;

        if (precoKg < menor) {
            menor = precoKg;
        }
    }

    cout << fixed << setprecision(2) << menor << endl;

    return 0;
}