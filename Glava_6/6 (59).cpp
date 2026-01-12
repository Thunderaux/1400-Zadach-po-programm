#include <iostream>
using namespace std;

int main() {
    double a, b, c;
    cin >> a >> b >> c;

    bool equilateral = (a == b) && (b == c);
    bool isosceles = (a == b) || (a == c) || (b == c);

    cout << boolalpha << equilateral << endl;
    cout << boolalpha << isosceles << endl;

    return 0;
}