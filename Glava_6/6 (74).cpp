#include <iostream>
using namespace std;

int main() {
    int a2, a1, b2, b1;
    cin >> a2 >> a1 >> b2 >> b1;

    int total_a = a2 * 10 + a1;
    int total_b = b2 * 10 + b1;

    int diff = total_a - total_b;
    int diff_tens = diff / 10;
    int diff_units = diff % 10;

    cout << diff_tens << " " << diff_units << endl;

    return 0;
}