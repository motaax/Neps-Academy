#include <iostream>
using namespace std;

int main() {
    int A1, D1, A2, D2;

    cin >> A1;
    cin >> D1;
    cin >> A2;
    cin >> D2;

    bool vivo1 = (D1 == A2);
    bool vivo2 = (D2 == A1);

    if (vivo1 && !vivo2)
        cout << 1 << '\n';
    else if (!vivo1 && vivo2)
        cout << 2 << '\n';
    else
        cout << -1 << '\n';

    return 0;
}