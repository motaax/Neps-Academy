#include <iostream>
using namespace std;

int main() {
    int C;
    cin >> C;

    int moedas100 = C / 100;
    C %= 100;

    int moedas50 = C / 50;
    C %= 50;

    int moedas25 = C / 25;
    C %= 25;

    int moedas10 = C / 10;
    C %= 10;

    int moedas5 = C / 5;
    C %= 5;

    int moedas1 = C;

    int total = moedas100 + moedas50 + moedas25 + moedas10 + moedas5 + moedas1;

    cout << total << endl;
    cout << moedas100 << endl;
    cout << moedas50 << endl;
    cout << moedas25 << endl;
    cout << moedas10 << endl;
    cout << moedas5 << endl;
    cout << moedas1 << endl;
}