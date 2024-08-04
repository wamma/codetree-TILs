#include <iostream>
using namespace std;

int main() {
    int num;
    int arr[11] = {};
    while (cin >> num && num != 0)
    {
        if (num >= 10)
        {
           int index = num / 10;
           index = min(index, 10);
           arr[index]++;
        }
    }
    for (int i = 10; i >= 1; --i)
    {
        cout << i * 10  << " - " << arr[i] << endl;
    }

    return 0;
}