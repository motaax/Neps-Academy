#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    long long soma = 0;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        soma += x;
    }

    cout << soma << endl;

}