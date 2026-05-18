#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, a, b;
    string s;

    cin >> n >> a >> b;
    cin >> s;

    reverse(s.begin() + (a - 1), s.begin() + b);
    cout << s << "\n";

}