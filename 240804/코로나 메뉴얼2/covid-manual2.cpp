#include <iostream>
using namespace std;

int main() {
    char jeung;
    int temperature;
    int acount = 0, bcount = 0, ccount = 0, dcount = 0;
    for (int i = 0; i < 3; ++i)
    {
        cin >> jeung >> temperature;
        if (jeung == 'Y' && temperature >= 37)
            acount++;
        else if (jeung == 'N' && temperature >= 37)
            bcount++;
        else if (jeung == 'Y' && temperature < 37)
            ccount++;
        else
            dcount++;
    }
    cout << acount << " " << bcount << " " << ccount << " " << dcount;
    if (acount >= 2)
        cout << " E";
    return 0;
}