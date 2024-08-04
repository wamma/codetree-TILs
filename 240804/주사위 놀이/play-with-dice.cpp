#include <iostream>
using namespace std;

int main() {
    int arr[10];
    int result_arr[7] = {};
    for (int i = 0; i < 10; ++i)
        cin >> arr[i];
    for (int i = 0; i < 10; ++i)
        result_arr[arr[i]]++;
    for (int i = 1; i <= 6; ++i)
        cout << i << " - " << result_arr[i] << endl;
    return 0;
}