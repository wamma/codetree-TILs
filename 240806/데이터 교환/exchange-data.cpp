#include <iostream>
using namespace std;

int main() {
    int a = 5, b = 6, c = 7;

    // 변수 값 변경
    int temp = a; // 임시 변수에 a 값을 저장
    a = c;        // a에 c 값을 대입
    c = b;        // c에 b의 값을 대입
    b = temp;     // b에 저장된 a의 값을 대입

    // 결과 출력
    cout << a << '\n'; // a의 값 (c의 값)
    cout << b << '\n'; // b의 값 (a의 값)
    cout << c << '\n'; // c의 값 (b의 값)

    return 0;
}