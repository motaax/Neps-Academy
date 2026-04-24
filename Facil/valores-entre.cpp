#include <iostream>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;

    if (A > B) {
        int temp = A;
        A = B;
        B = temp;
    }

    for (int i = A; i <= B; i++) {
        if (i > A) cout << " ";
        cout << i;
    }

    cout << endl;
}