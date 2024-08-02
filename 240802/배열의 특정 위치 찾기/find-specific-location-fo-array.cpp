#include <iostream>
using namespace std;

int main() {
    int arr[10], sum1 = 0, sum2 = 0, count = 0;
    for (int i = 0; i < 10; ++i)
        cin >> arr[i];
    for (int i = 0; i < 10; ++i)
    {
        if (arr[i] % 2 == 0)
            sum1 += arr[i];
        else if ((i + 1) % 3 == 0)
        {
            sum2 += arr[i];
            count++;
        }
    }
    double sum3 = (double)sum2 / count;

    cout << fixed;
    cout.precision(1);
    cout << sum1 << " " << sum3;

    return 0;
}