#include <bits/stdc++.h>
using namespace std;

int main() {
    int v, a, f, p;
    cin >> v >> a >> f >> p;
    int contas[3] = {a, f, p};

    sort(contas, contas + 3);

    int qntd = 0;
    for(int i = 0; i < 3; i++) {
        if(v >= contas[i]) {
            v -= contas[i];
            qntd++;
        }
    }

    cout << qntd << "\n";

}