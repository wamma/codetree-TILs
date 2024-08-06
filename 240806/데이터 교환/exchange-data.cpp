#include <iostream>
using namespace std;

int main() {
    int a = 5, b = 6, c = 7;
    int tmp;
    tmp = a;
    b = tmp;
    c = b;
    cout << a << '\n';
    cout << b << '\n';
    cout << c << '\n';
    return 0;
}