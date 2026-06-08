#include <iostream>
using namespace std;

int main() {
    int P, D, B;
    
    cin >> P;
    cin >> D;
    cin >> B;
    
    int pontos = P + 2 * D + 3 * B;
    
    if (pontos >= 150)
        cout << 'B' << '\n';
    else if (pontos >= 120)
        cout << 'D' << '\n';
    else if (pontos >= 100)
        cout << 'P' << '\n';
    else
        cout << 'N' << '\n';
    
    return 0;
}