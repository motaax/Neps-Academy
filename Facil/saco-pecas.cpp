#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    while (n--) {
        string s;
        cin >> s;

        bool valido = true;

        for (int i = 0; i < (int)s.size(); i += 7) {
            set<char> usadas;

            for (int j = i; j < min(i + 7, (int)s.size()); j++) {
                if (usadas.count(s[j])) {
                    valido = false;
                    break;
                }
                usadas.insert(s[j]);
            }

            if (!valido) break;
        }

        if (valido)
            cout << "Valid bag\n";
        else
            cout << "Invalid bag\n";
    }

    return 0;
}