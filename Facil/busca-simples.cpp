#include <iostream>
using namespace std;

int main() {
    int v[10];
    int x;

    for (int i = 0; i < 10; i++) {
        cin >> v[i];
    }

    cin >> x;

    bool achou = false;
    for (int i = 0; i < 10; i++) {
        if (v[i] == x) {
            achou = true;
            break;
        }
    }

    // imprime resultado
    if (achou) {
        cout << "SIM" << endl;
    } else {
        cout << "NAO" << endl;
    }

}