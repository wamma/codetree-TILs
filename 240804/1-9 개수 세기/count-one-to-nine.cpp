#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i)
        cin >> arr[i];
    int count_arr[10] = {};
    for (int i = 0; i < n; ++i)
        count_arr[arr[i]]++;
    for (int i = 1; i <= 9; ++i)
        cout << count_arr[i] << endl;
    return 0;
}