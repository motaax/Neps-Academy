#include <iostream>
using namespace std;

int main() {
    long long D1, H1, M1;
    long long D2, H2, M2;

    cin >> D1;
    cin >> H1;
    cin >> M1;
    cin >> D2;
    cin >> H2;
    cin >> M2;

    long long inicio = (D1 - 1) * 24 * 60 + H1 * 60 + M1;
    long long fim = (D2 - 1) * 24 * 60 + H2 * 60 + M2;

    cout << (fim - inicio) * 60 << '\n';

    return 0;
}