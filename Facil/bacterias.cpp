#include <iostream>
using namespace std;

int main() {
    long long N, P;
    cin >> N >> P;

    long long bact = 1;
    int dias = 0;

    while (bact * P <= N) {
        bact *= P;
        dias++;
    }

    cout << dias << "\n";

    return 0;
}