#include <iostream>
using namespace std;

int main() {
    int N, D, A;

    cin >> N;
    cin >> D;
    cin >> A;

    int apertos;

    if (D >= A) {
        apertos = D - A;
    } else {
        apertos = (N - A) + D;
    }

    cout << apertos << endl;

    return 0;
}