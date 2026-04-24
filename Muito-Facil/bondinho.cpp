#include <iostream>
using namespace std;

int main() {
    int a, m;
    cin >> a >> m;
    int capac = 50;

    if(a + m > capac) {
        cout << "N";
    } else {
        cout << "S";
    }

}