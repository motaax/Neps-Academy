#include <iostream>
using namespace std;

int main() {
    int A, B, C;
    cin >> A >> B >> C;

    int v[3] = {A, B, C};

    for (int m0 = -1; m0 <= 1; m0++) {
        for (int m1 = -1; m1 <= 1; m1++) {
            for (int m2 = -1; m2 <= 1; m2++) {
                if (m0 == 0 && m1 == 0 && m2 == 0) continue;

                int soma = m0 * v[0] + m1 * v[1] + m2 * v[2];

                if (soma == 0) {
                    cout << "S\n";
                    return 0;
                }
            }
        }
    }

    cout << "N\n";
    return 0;
}