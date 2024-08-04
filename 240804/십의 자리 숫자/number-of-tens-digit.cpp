#include <iostream>
using namespace std;

int main() {
    int result_arr[10] = {};
    int num;
    while (cin >> num && num != 0)
    {
        if (num >= 10) {
            int ten_digit = num / 10;
            result_arr[ten_digit]++;
        }
    }
    for (int i = 1; i <= 9; ++i)
        cout << i << " - " << result_arr[i] << endl;
    return 0;
}