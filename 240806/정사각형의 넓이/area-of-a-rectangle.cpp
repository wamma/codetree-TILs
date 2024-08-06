#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int res = n * n;
    cout << res;
    if (n < 5)
        cout << "tiny";
    return 0;
}