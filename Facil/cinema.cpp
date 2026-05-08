#include <iostream>
using namespace std;

int preco(int idade) {
    if (idade <= 17)
        return 15;
    else if (idade >= 60)
        return 20;
    else
        return 30;
}

int main() {
    int a, b;
    
    cin >> a >> b;
    
    int total = preco(a) + preco(b);
    
    cout << total << endl;
    
    return 0;
}