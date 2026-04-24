#include <iostream>
using namespace std;

int main() {
    int A, B, C;
    cin >> A >> B >> C;

    if (A == B) {
        cout << C << "\n";
    } else if (A == C) {
        cout << B << "\n";
    } else {
        cout << A << "\n";
    }
}