#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int num;
    long long soma = 0;

    for (int i = 0; i < N; i++) {
        cin >> num;
        soma += num;
    }

    cout << soma << "\n";

    return 0;
}