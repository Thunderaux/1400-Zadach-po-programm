#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c;
    cin >> a >> b >> c;

    double d = b * b - 4 * a * c;

    if (d > 0) {
        double x1 = (-b + sqrt(d)) / (2 * a);
        double x2 = (-b - sqrt(d)) / (2 * a);
        cout << x1 << " " << x2 << endl;
    }
    else if (d == 0) {
        double x = -b / (2 * a);
        cout << x << endl;
    }
    else {
        cout << "NO REAL ROOTS" << endl;
    }

    return 0;
}