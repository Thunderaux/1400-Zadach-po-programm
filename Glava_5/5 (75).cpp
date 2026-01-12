#include <iostream>
using namespace std;

int main() {
    int a3, a2, a1, b2, b1;
    cin >> a3 >> a2 >> a1 >> b2 >> b1;

    int total_a = a3 * 100 + a2 * 10 + a1;
    int total_b = b2 * 10 + b1;

    int sum = total_a + total_b;
    int sum_hundreds = sum / 100;
    int sum_tens = (sum / 10) % 10;
    int sum_units = sum % 10;

    cout << sum_hundreds << " " << sum_tens << " " << sum_units << endl;

    return 0;
}