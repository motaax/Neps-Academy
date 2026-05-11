#include <iostream>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    if (N % (M + 1) == 0)
        cout << "Carlos" << endl;
    else
        cout << "Paula" << endl;

    return 0;
}