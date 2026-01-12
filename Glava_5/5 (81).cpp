#include <iostream>
using namespace std;

int main() {
    double a, b, c;
    cin >> a >> b >> c;

    if (!(a + b > c && a + c > b && b + c > a)) {
        cout << "NOT TRIANGLE" << endl;
        return 0;
    }

    double a2 = a * a;
    double b2 = b * b;
    double c2 = c * c;

    bool right = (a2 + b2 == c2) || (a2 + c2 == b2) || (b2 + c2 == a2);
    bool obtuse = (a2 + b2 < c2) || (a2 + c2 < b2) || (b2 + c2 < a2);
    bool acute = !right && !obtuse;

    bool equilateral = (a == b) && (b == c);
    bool isosceles = (a == b) || (a == c) || (b == c);
    bool scalene = !equilateral && !isosceles;

    if (right) cout << "RIGHT" << endl;
    else if (obtuse) cout << "OBTUSE" << endl;
    else cout << "ACUTE" << endl;

    if (equilateral) cout << "EQUILATERAL" << endl;
    else if (isosceles) cout << "ISOSCELES" << endl;
    else cout << "SCALENE" << endl;

    return 0;
}