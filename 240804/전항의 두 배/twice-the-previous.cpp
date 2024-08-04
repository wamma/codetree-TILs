#include <iostream>
using namespace std;

int main() {
    int first, second;
    cin >> first >> second;
    int arr[10];
    arr[0] = first;
    arr[1] = second;
    for (int i = 2; i < 10; ++i)
        arr[i] = arr[i - 1] + 2 * arr[i - 2];
    for (int i = 0; i < 10; ++i)
        cout << arr[i] << " ";
    return 0;
}