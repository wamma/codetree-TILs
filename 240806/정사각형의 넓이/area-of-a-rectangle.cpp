#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int res = n * n;
    cout << res << '\n';
    if (n < 5)
        cout << "tiny" << '\n';
    return 0;
}