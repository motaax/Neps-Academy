#include <iostream>
using namespace std;

int main() {
    int M;
    cin >> M;

    int horas = M / 60;
    int minutos = M % 60;

    cout << horas << "\n";
    cout << minutos << "\n";

    return 0;
}