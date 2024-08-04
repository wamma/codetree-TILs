#include <iostream>
using namespace std;

int main() {
    int numbers[100], num, count = 0;
    while (cin >> num && num != 0)
        numbers[count++] = num;
    for (int i = 0; i < count; ++i) {
        if (numbers[i] % 2 == 0)
            cout << numbers[i] / 2 << " ";
        else if (numbers[i] % 2 == 1)
            cout << numbers[i] + 3 << " ";
    }
    return 0;
}