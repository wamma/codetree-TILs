#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a;
    int b, c, d, e;
    cin >> b >> c >> d >> e;
    cout << ((a > b) ? 1 : 0) << '\n';
    cout << ((a > c) ? 1 : 0) << '\n';
    cout << ((a > d) ? 1 : 0) << '\n';
    cout << ((a > e) ? 1 : 0) << '\n';
    return 0;
}