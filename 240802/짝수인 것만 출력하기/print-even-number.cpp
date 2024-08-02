#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n], new_arr[n], count = 0;
    for (int i = 0; i < n; ++i)
        cin >> arr[i];
    for (int i = 0; i < n; ++i)
    {
        if (arr[i] % 2 == 0)
            new_arr[count++] = arr[i];
    }
    for (int i = 0; i < count; ++i)
        cout << new_arr[i] << " ";
    return 0;
}