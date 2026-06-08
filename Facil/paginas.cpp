#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        long long Q, Lq, Lr, Lp;
        cin >> Q >> Lq >> Lr >> Lp;

        long long linhas = Q * (Lq + Lr);
        long long paginas = (linhas + Lp - 1) / Lp;

        if (paginas == 1)
            cout << "O livro contera 1 pagina.\n";
        else
            cout << "O livro contera " << paginas << " paginas.\n";
    }

    return 0;
}