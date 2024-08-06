#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    int num[3] = {a, b, c};
    sort(num, num + 3);
    cout << num[1];

    return 0;
}