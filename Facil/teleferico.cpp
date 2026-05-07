#include <iostream>
using namespace std;

int main() {
    int C, A;
    
    cin >> C;
    cin >> A;

    int viagens = (A + (C - 2)) / (C - 1);

    cout << viagens << "\n";

    return 0;
}