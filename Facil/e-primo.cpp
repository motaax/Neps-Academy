#include <iostream>
using namespace std;

int main() {
    long long N;
    cin >> N;

    if (N <= 1) {
        cout << "N" << endl;
        return 0;
    }

    if (N == 2) {
        cout << "S" << endl;
        return 0;
    }

    if (N % 2 == 0) {
        cout << "N" << endl;
        return 0;
    }

    for (long long i = 3; i * i <= N; i += 2) {
        if (N % i == 0) {
            cout << "N" << endl;
            return 0;
        }
    }

    cout << "S" << endl;
    return 0;
}