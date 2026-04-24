#include <iostream>
#include <string>
using namespace std;

int main() {
    string S;
    char C;
    
    getline(cin, S);
    cin >> C;        

    int count = 0;

    for (char ch : S) {
        if (ch == C) {
            count++;
        }
    }

    cout << count << "\n";

    return 0;
}