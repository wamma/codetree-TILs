#include <iostream>
using namespace std;

int main() {
    int n, cnt = 0;
    int result[1000];
    cin >> n;
    int i = 1, index = 0;
    while (cnt < 2)
    {
        int multiple = n * i;
        result[index++] = multiple;
        if (multiple % 5 == 0)
            cnt++;
        i++;
    }
    for (int j = 0; j < index; ++j)
        cout << result[j] << " ";
    return 0;
}