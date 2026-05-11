#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, M;
    if (!(cin >> N >> M)) return 0;

    vector<int> v1(N + 1, 0);
    vector<int> v2(N + 1, 0);

    for (int n = 1; n <= N; ++n) {
        int limite_k = min(n, M);
        for (int k = 1; k <= limite_k; ++k) {
            bool oponente_perde = false;
            if (v1[n - k] == 0) {
                oponente_perde = true;
            } else if (v1[n - k] == k && v2[n - k] == 0) {
                oponente_perde = true;
            }

            if (oponente_perde) {
                if (v1[n] == 0) {
                    v1[n] = k;
                } else if (v1[n] != k) {
                    v2[n] = k;
                    break; 
                }
            }
        }
    }

    if (v1[N] != 0) {
        cout << "Paula" << "\n";
    } else {
        cout << "Carlos" << "\n";
    }

    return 0;
}