#include <iostream>
using namespace std;

int main() {
    int L;
    cin >> L;

    long long pedaços = 1;

    while (L >= 2) {
        pedaços *= 4;
        L /= 2;
    }

    cout << pedaços << endl;

    return 0;
}