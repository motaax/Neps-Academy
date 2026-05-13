#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> a(N);

    for (int i = 0; i < N; i++) {
        cin >> a[i];
    }

    int maior = 0;
    int naoVisiveis = 0;

    for (int i = N - 1; i >= 0; i--) {
        if (a[i] > maior) {
            maior = a[i];
        } else {
            naoVisiveis++;
        }
    }

    cout << naoVisiveis << endl;

    return 0;
}