#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;

    while (n--) {
        int x;
        cin >> x;

        int ocupados = 0;
        string linha;

        for (int i = 0; i < x; i++) {
            cin >> linha;
            for (char c : linha) {
                if (c == '#')
                    ocupados++;
            }
        }

        if (ocupados % 2 == 0)
            cout << "Further investigation is needed.\n";
        else
            cout << "Just give up already!\n";
    }

    return 0;
}