#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<long long> v(N);
    for (int i = 0; i < N; i++) cin >> v[i];

    long long K;
    cin >> K;

    int l = 0, r = N - 1;
    while (l < r) {
        long long s = v[l] + v[r];
        if (s == K) {
            cout << v[l] << ' ' << v[r] << '\n';
            break;
        }
        if (s < K) l++;
        else r--;
    }
}