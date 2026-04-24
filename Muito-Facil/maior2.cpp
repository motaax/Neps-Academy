#include <iostream>
using namespace std;

int main() {
    int a, b, maior;
    
    cin >> a >> b;
    
    maior = a;
    
    if (b > maior) {
        maior = b;
    }
    
    cout << maior << "\n";
    
    return 0;
}