#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    long long soma = 0;
    int dias = 0;

    for (int i = 0; i < N; i++) {
        int A;
        cin >> A;

        if (soma < 1000000) {
            soma += A;
            dias++;
        }
    }

    cout << dias << "\n";

    return 0;
}