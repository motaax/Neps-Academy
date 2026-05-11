#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int x;
    int estoque = 0;

    for (int i = 0; i < N; i++) {
        cin >> x;
        estoque += (x - 1);
    }

    cout << estoque << endl;

    return 0;
}