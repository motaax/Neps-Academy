#include <iostream>
using namespace std;

int main() {
    int N, G, M;

    cin >> N;
    cin >> G;
    cin >> M;

    int totalPedacos = (8 * G) + (6 * M);

    int sobra = totalPedacos - min(N, totalPedacos);

    cout << sobra << endl;

    return 0;
}