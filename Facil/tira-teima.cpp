#include <iostream>
using namespace std;

int main() {
    int X, Y;
    cin >> X >> Y;

    if (0 <= X && X <= 432 && 0 <= Y && Y <= 468)
        cout << "dentro\n";
    else
        cout << "fora\n";

    return 0;
}