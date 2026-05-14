#include <iostream>
using namespace std;

int main() {
    int freq[10] = {0};
    
    for (int i = 0; i < 8; i++) {
        int x;
        cin >> x;
        freq[x]++;
    }

    int maior = 0;

    for (int i = 0; i < 10; i++) {
        if (freq[i] > maior)
            maior = freq[i];
    }

    if (maior <= 4)
        cout << "S\n";
    else
        cout << "N\n";

    return 0;
}