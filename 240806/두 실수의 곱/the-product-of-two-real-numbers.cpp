#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double a = 5.26, b = 8.27;
    double result = a * b;
    cout << fixed << setprecision(3) << result;
    return 0;
}