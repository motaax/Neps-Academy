#include <iostream>
using namespace std;

int main() {
    long long N;
    cin >> N;

    long long fatorial = 1;

    for (long long i = 2; i <= N; i++) {
        fatorial *= i;
    }

    cout << fatorial << "\n";

}