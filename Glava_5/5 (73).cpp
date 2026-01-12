#include <iostream>
using namespace std;

int main() {
    int a2, a1, b;
    cin >> a2 >> a1 >> b;

    int total_a = a2 * 10 + a1;
    int diff = total_a - b;

    int diff_tens = diff / 10;
    int diff_units = diff % 10;

    cout << diff_tens << " " << diff_units << endl;

    return 0;
}