#include <iostream>
using namespace std;

int main() {
    double x, y;
    cin >> x >> y;

    double max_a = x, min_a = y;
    if (y > x) {
        max_a = y;
        min_a = x;
    }

    double max_b = x, min_b = y;
    if (x < y) {
        max_b = y;
        min_b = x;
    }

    cout << max_a << " " << min_a << endl;
    cout << max_b << " " << min_b << endl;

    return 0;
}