#include <iostream>
#include <string>

using namespace std;

int main() {
    int N;
    cin >> N;
    cin.ignore();

    int saldo = 0;
    string linha;

    for (int i = 0; i < N; i++) {
        getline(cin, linha);

        for (char c : linha) {
            if (c == '{') {
                saldo++;
            } else if (c == '}') {
                saldo--;

                if (saldo < 0) {
                    cout << "N" << endl;
                    return 0;
                }
            }
        }
    }

    if (saldo == 0)
        cout << "S" << endl;
    else
        cout << "N" << endl;

    return 0;
}