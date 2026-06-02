#include <bits/stdc++.h>
using namespace std;

int p[1001];

int find(int x){
    return p[x] == x ? x : p[x] = find(p[x]);
}

int main(){
    int n, m, a, b;
    cin >> n >> m;

    for(int i = 1; i <= n; i++) p[i] = i;

    while(m--){
        cin >> a >> b;
        p[find(a)] = find(b);
    }

    int ans = 0;
    for(int i = 1; i <= n; i++)
        ans += (find(i) == i);

    cout << ans << '\n';
}