#include <iostream>
using namespace std;

int main() {
    int a, b, c, maior;
    
    cin >> a >> b >> c;
    
    maior = a;
    
    if (b > maior) {
        maior = b;
    }
    
    if (c > maior) {
        maior = c;
    }
    
    cout << maior << "\n";
    
    return 0;
}