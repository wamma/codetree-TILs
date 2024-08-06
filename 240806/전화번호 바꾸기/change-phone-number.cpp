#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    string prefix = s.substr(0, 4);
    string first_num = s.substr(4, 4);
    string second_num = s.substr(9, 4);

    cout << prefix << second_num << "-" << first_num;
    return 0;
}