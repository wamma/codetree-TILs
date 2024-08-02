#include <iostream>
using namespace std;

int main() {
    int arr[100], sum = 0;
    for (int i = 0; i < 100; ++i)
        cin >> arr[i];
    for (int i = 3; i < 100; ++i)
    {
        if (arr[i] == 0)
        {
            sum = arr[i - 3] + arr[i - 2] + arr[i - 1];
            break;
        }
    }
    cout << sum << "\n";
    return 0;
}