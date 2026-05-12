#include <iostream>
using namespace std;

int main() {
    int t1, t2, t3;
    cin >> t1 >> t2 >> t3;

    if (t1 < t2 && t1 < t3) {
        cout << 1 << endl;
        if (t2 < t3) {
            cout << 2 << endl;
            cout << 3 << endl;
        } else {
            cout << 3 << endl;
            cout << 2 << endl;
        }
    } 
    else if (t2 < t1 && t2 < t3) {
        cout << 2 << endl;
        if (t1 < t3) {
            cout << 1 << endl;
            cout << 3 << endl;
        } else {
            cout << 3 << endl;
            cout << 1 << endl;
        }
    } 
    else {
        cout << 3 << endl;
        if (t1 < t2) {
            cout << 1 << endl;
            cout << 2 << endl;
        } else {
            cout << 2 << endl;
            cout << 1 << endl;
        }
    }

    return 0;
}