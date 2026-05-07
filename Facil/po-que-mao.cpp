#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int N, X, Y, Z;
    
    cin >> N;
    cin >> X;
    cin >> Y;
    cin >> Z;

    int doces[3] = {X, Y, Z};

    sort(doces, doces + 3);

    int contador = 0;

    for (int i = 0; i < 3; i++) {
        if (N >= doces[i]) {
            N -= doces[i];
            contador++;
        }
    }

    cout << contador << endl;

    return 0;
}