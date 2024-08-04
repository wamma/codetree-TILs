#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[100];
    arr[0] = 1;
    arr[1] = n;
    int index = 2;
    while (true)
    {
        arr[index] = arr[index - 2] + arr[index - 1];
        index++;
        if (arr[index - 1] > 100)
            break;
    }
    for (int j = 0; j < index; ++j)
        cout << arr[j] << " ";

    return 0;
}