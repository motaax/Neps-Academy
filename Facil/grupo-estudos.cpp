#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int anterior, atual;
    int distintas = 0;

    for(int i = 0; i < n; i++) {
        cin >> atual;

        if(i == 0 || atual != anterior) {
            distintas++;

            anterior = atual;
        }
    }

    cout << distintas << "\n";

}