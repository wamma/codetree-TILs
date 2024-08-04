#include <iostream>
using namespace std;

int main() {
    int num, divNum;
    cin >> num >> divNum;

    int arr[10] = {};
    while (num > 1)
    {
        int namuji = num % divNum;
        arr[namuji]++;
        num /= divNum;
    }
    int result = 0;
    for (int i = 0; i < divNum; ++i)
    {
        int count = arr[i];
        result += count * count;
    }
    cout << result;
    return 0;
}