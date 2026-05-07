#include <iostream>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;

    int x = min(A, B);

    int C = 3 * x - A - B;

    cout << C << "\n";

    return 0;
}