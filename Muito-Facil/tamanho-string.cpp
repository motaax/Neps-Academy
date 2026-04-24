#include <iostream>
using namespace std;

int main() {
    char S[1000];
    cin >> S;

    int tamanho = 0;

    while (S[tamanho] != '\0') {
        tamanho++;
    }

    cout << tamanho << "\n";

    return 0;
}