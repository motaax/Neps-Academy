#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> A(N);

    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    int soma = A[0] + A[N - 1];

    for (int i = 0; i <= (N - 1) / 2; i++) {
        if (A[i] + A[N - 1 - i] != soma) {
            cout << "N\n";
            return 0;
        }
    }

    cout << "S\n";
    return 0;
}