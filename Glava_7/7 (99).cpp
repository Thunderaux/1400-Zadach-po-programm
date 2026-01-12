#include <iostream>
using namespace std;

int main() {
    double x, y;
    cin >> x >> y;

    double max_a;
    if (x > y)
        max_a = x;
    if (y >= x)
        max_a = y;

    double max_b = x;
    if (y > x)
        max_b = y;

    cout << max_a << endl;
    cout << max_b << endl;

    return 0;
}