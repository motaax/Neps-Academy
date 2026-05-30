#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Pais {
    int id;
    int ouro = 0;
    int prata = 0;
    int bronze = 0;
};

bool comparar(const Pais &a, const Pais &b) {
    if (a.ouro != b.ouro) return a.ouro > b.ouro;
    if (a.prata != b.prata) return a.prata > b.prata;
    if (a.bronze != b.bronze) return a.bronze > b.bronze;
    return a.id < b.id;
}

int main() {
    int N, M;
    cin >> N >> M;

    vector<Pais> paises(N + 1);

    for (int i = 1; i <= N; i++) {
        paises[i].id = i;
    }

    for (int i = 0; i < M; i++) {
        int O, P, B;
        cin >> O >> P >> B;

        paises[O].ouro++;
        paises[P].prata++;
        paises[B].bronze++;
    }

    vector<Pais> ranking;
    for (int i = 1; i <= N; i++) {
        ranking.push_back(paises[i]);
    }

    sort(ranking.begin(), ranking.end(), comparar);

    for (int i = 0; i < N; i++) {
        if (i) cout << " ";
        cout << ranking[i].id;
    }
    cout << endl;

    return 0;
}