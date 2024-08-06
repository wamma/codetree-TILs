#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double a;
    cin >> a;
    a += 1.5;
    cout << fixed << setprecision(2) << a;
    return 0;
}