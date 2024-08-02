#include <iostream>
using namespace std;

int main() {
    int arr[10], even_sum = 0, multiple_of_3_sum = 0, multiple_of_3_count = 0;
    
    for (int i = 0; i < 10; ++i)
        cin >> arr[i];
    
    for (int i = 0; i < 10; ++i) {
        if ((i + 1) % 2 == 0) // 짝수 번째 원소 (1-based index)
            even_sum += arr[i];
        if ((i + 1) % 3 == 0) { // 3의 배수 번째 원소 (1-based index)
            multiple_of_3_sum += arr[i];
            multiple_of_3_count++;
        }
    }
    
    double multiple_of_3_avg = (multiple_of_3_count == 0) ? 0 : (double)multiple_of_3_sum / multiple_of_3_count;
    
    cout << fixed;
    cout.precision(1);
    cout << even_sum << " " << multiple_of_3_avg << endl;

    return 0;
}