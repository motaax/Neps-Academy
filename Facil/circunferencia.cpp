#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double R;
    const double pi = 3.1416;

    cin >> R;

    double area = pi * R * R;

    cout << fixed << setprecision(2) << area << "\n";

    return 0;
}