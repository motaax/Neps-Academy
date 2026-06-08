#include <iostream>
using namespace std;

int main() {
    long long N;
    cin >> N;

    if (N == 1) {
        cout << 'N' << '\n';
        return 0;
    }

    for (long long i = 2; i * i <= N; i++) {
        if (N % i == 0) {
            cout << 'S' << '\n';
            return 0;
        }
    }

    cout << 'N' << '\n';
    return 0;
}