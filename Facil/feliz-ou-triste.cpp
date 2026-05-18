#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    int happy = 0, sad = 0;

    for (int i = 0; i + 2 < s.size(); i++) {
        if (s.substr(i, 3) == ":-)")
            happy++;
        else if (s.substr(i, 3) == ":-(")
            sad++;
    }

    if (happy == 0 && sad == 0)
        cout << "none\n";
    else if (happy == sad)
        cout << "unsure\n";
    else if (happy > sad)
        cout << "happy\n";
    else
        cout << "sad\n";

    return 0;
}