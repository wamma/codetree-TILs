#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int arr[10], new_num = 0;
    for (int i = 2; i < 10; ++i)
    {
        arr[0] = n;
        arr[1] = m;
        arr[i] = arr[i - 1] + arr[i - 2];
        if (arr[i] >= 10)
            arr[i] = arr[i] % 10;
    }
    for (int i = 0; i < 10; ++i)
        cout << arr[i] << " ";
    return 0;
}