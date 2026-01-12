#include <iostream>
using namespace std;

int main() {
    double a, b, c;
    cin >> a >> b >> c;

    bool exists = (a + b > c) && (a + c > b) && (b + c > a);

    if (!exists) {
        cout << "NOT TRIANGLE" << endl;
        return 0;
    }

    bool right =
        (a * a + b * b == c * c) ||
        (a * a + c * c == b * b) ||
        (b * b + c * c == a * a);

    cout << boolalpha << right << endl;

    return 0;
}