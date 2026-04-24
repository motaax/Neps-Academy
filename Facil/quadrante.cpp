#include <iostream>
using namespace std;

int main() {
    int X, Y;
    cin >> X >> Y;

    if (X == 0 || Y == 0) {
        cout << "eixos" << endl;
    } 
    else if (X > 0 && Y > 0) {
        cout << "Q1" << endl;
    } 
    else if (X < 0 && Y > 0) {
        cout << "Q2" << endl;
    } 
    else if (X < 0 && Y < 0) {
        cout << "Q3" << endl;
    } 
    else {
        cout << "Q4" << endl;
    }

}