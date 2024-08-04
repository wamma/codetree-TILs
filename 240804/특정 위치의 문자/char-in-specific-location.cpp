#include <iostream>
using namespace std;

int main() {
    char word[6] = {'L', 'E', 'B', 'R', 'O', 'S'};
    int index = -1;
    char findChar;
    cin >> findChar;
    for (int i = 0; i < 6; ++i)
    {
        if (word[i] == findChar)
            index = i;
    }
    if (index == -1)
        cout << "None";
    else
        cout << index;
    return 0;
}