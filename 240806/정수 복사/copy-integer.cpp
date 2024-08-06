#include <iostream>
using namespace std;

int main() {
    int a = 3;
    int b = 4;
    b = a;
    int result = a * b;
    cout << a << " " << b << '\n';
    cout << result;
    return 0;
}