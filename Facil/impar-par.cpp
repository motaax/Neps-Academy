#include <iostream>
using namespace std;

int main() {
    int bino, cino;
    
    cin >> bino;
    cin >> cino;
    
    int soma = bino + cino;
    
    if (soma % 2 == 0) {
        cout << "Bino" << "\n";
    } else {
        cout << "Cino" << "\n";
    }
    
    return 0;
}