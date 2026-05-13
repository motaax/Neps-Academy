#include <iostream>
using namespace std;

int main() {
    int L, D, K, P;

    cin >> L >> D;
    cin >> K >> P;

    int pedagios = L / D;

    int custoTotal = (L * K) + (pedagios * P);

    cout << custoTotal << endl;

    return 0;
}