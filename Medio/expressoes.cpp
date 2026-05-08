#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        string s;
        cin >> s;

        stack<char> pilha;
        bool ok = true;

        for (char c : s) {
            if (c == '(' || c == '[' || c == '{') {
                pilha.push(c);
            }
            else {
                if (pilha.empty()) {
                    ok = false;
                    break;
                }

                char topo = pilha.top();
                pilha.pop();

                if ((c == ')' && topo != '(') ||
                    (c == ']' && topo != '[') ||
                    (c == '}' && topo != '{')) {
                    ok = false;
                    break;
                }
            }
        }

        if (!pilha.empty())
            ok = false;

        cout << (ok ? 'S' : 'N') << endl;
    }

    return 0;
}