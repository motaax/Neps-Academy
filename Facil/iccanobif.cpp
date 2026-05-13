#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    long long fib[41];

    fib[N - 1] = 1;
    if (N > 1)
        fib[N - 2] = 1;

    for (int i = N - 3; i >= 0; i--) {
        fib[i] = fib[i + 1] + fib[i + 2];
    }

    for (int i = 0; i < N; i++) {
        if (i > 0) cout << " ";
        cout << fib[i];
    }

    cout << endl;

    return 0;
}