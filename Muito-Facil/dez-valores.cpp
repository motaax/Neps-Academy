#include <iostream>
using namespace std;

int main() {
    int X;
    cin >> X;

    for (int i = 1; i <= 10; i++) {
        cout << X + i;
        if (i < 10) cout << " ";
    }

    cout << "\n";
}