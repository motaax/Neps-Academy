#include <iostream>
using namespace std;

int main() {
    int p, r;
    cin >> p >> r;

    bool cond = (p == 1 && r == 0); //B
    bool cond2 = (p == 0); //C
    bool cond3 = (p == 1 && r == 1); //A

    if(cond) {
        cout << "B \n";
        return 0;
    } else if(cond2) {
        cout << "C \n";
        return 0;
    } else if(cond3) {
        cout << "A \n";
    } 

}