#include <iostream>
using namespace std;

bool cabe(int x, int y, int h, int l) {
    return (x <= h && y <= l) || (x <= l && y <= h);
}

int main() {
    int A, B, C, H, L;

    cin >> A >> B >> C >> H >> L;

    if (cabe(A, B, H, L) ||
        cabe(A, C, H, L) ||
        cabe(B, C, H, L))
        cout << "S\n";
    else
        cout << "N\n";

    return 0;
}