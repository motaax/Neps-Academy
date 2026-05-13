#include <iostream>
using namespace std;

int main() {
    int N1, D1, V1;
    int N2, D2, V2;

    cin >> N1 >> D1 >> V1;
    cin >> N2 >> D2 >> V2;

    if ((long long)D1 * V2 < (long long)D2 * V1)
        cout << N1 << endl;
    else
        cout << N2 << endl;

    return 0;
}