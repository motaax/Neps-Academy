#include <iostream>
using namespace std;

int main() {
    int H, M;

    cin >> H;
    cin >> M;

    int totalMinutos = H * 60 + M;

    cout << totalMinutos << "\n";

    return 0;
}