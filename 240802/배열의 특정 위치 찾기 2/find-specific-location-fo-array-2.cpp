#include <iostream>
using namespace std;

int main() {
    int arr[10], even_sum = 0, odd_sum = 0, result = 0;
    for (int i = 0; i < 10; ++i)
        cin >>arr[i];
    for (int i = 0; i < 10; ++i)
    {
        if (i % 2 == 0)
            even_sum += arr[i];
        else if (i % 2 == 1)
            odd_sum += arr[i];
    }
    result = (even_sum > odd_sum) ? (even_sum - odd_sum) : (odd_sum - even_sum);
    cout << result;
    return 0;
}