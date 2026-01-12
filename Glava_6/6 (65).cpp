#include <iostream>
using namespace std;

int main() {
    double a, b, c, x, y;
    cin >> a >> b >> c >> x >> y;

    bool fits =
        (a <= x && b <= y) ||
        (a <= y && b <= x) ||
        (a <= x && c <= y) ||
        (a <= y && c <= x) ||
        (b <= x && c <= y) ||
        (b <= y && c <= x);

    cout << boolalpha << fits << endl;

    return 0;
}