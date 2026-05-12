#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> v(N);

    for (int i = 0; i < N; i++) {
        cin >> v[i];
    }

    for (int i = 0; i < N; i++) {
        int soma = v[i];

        if (i > 0)
            soma += v[i - 1];

        if (i < N - 1)
            soma += v[i + 1];

        cout << soma << endl;
    }

    return 0;
}