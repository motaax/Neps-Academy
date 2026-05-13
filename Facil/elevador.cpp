#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> pesos(N);

    for (int i = 0; i < N; i++) {
        cin >> pesos[i];
    }

    sort(pesos.begin(), pesos.end());

    if (pesos[0] > 8) {
        cout << "N" << endl;
        return 0;
    }

    for (int i = 1; i < N; i++) {
        if (pesos[i] - pesos[i - 1] > 8) {
            cout << "N" << endl;
            return 0;
        }
    }

    cout << "S" << endl;

    return 0;
}