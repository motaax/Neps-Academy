#include <iostream>
using namespace std;

int main() {
    int nota1, nota2;
    cin >> nota1 >> nota2;

    int media = (nota1 + nota2) / 2;

    if(media >= 7) {
        cout << "Aprovado";
    } else if(media < 7 && media >= 4) {
        cout << "Recuperacao";
    } else if(media < 4) {
        cout << "Reprovado";
    }
    
    return 0;
}