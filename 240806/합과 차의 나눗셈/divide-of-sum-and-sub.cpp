#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    double add = a + b, bbagi = a - b;
    double result = add / bbagi;
    cout << fixed << setprecision(2) << result;
    return 0;
}