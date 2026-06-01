#include <iostream>
using namespace std;

int main() {
    int H, P, F, D;
    cin >> H >> P >> F >> D;

    while (true) {
        F = (F + D + 16) % 16;

        if (F == H) {
            cout << "S\n";
            break;
        }
        if (F == P) {
            cout << "N\n";
            break;
        }
    }
    return 0;
}