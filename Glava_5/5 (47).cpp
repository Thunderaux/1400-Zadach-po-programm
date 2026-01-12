#include <iostream>
using namespace std;

int main() {
    double a, b, c;
    cin >> a >> b >> c;

    bool condition_a = (a < b) && (b < c);
    bool condition_b = (b > a) && (a > c);

    cout << boolalpha << condition_a << endl;
    cout << boolalpha << condition_b << endl;

    return 0;
}