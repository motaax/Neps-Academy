#include <iostream>
using namespace std;

int main() {
    int x;
    cin >> x;

    if (x <= 1) {
        cout << "N" << endl;
        return 0;
    }

    bool primo = true;

    for (int i = 2; i * i <= x; i++) {
        if (x % i == 0) {
            primo = false;
            break;
        }
    }

    if (primo) cout << "S" << endl;
    else cout << "N" << endl;
}