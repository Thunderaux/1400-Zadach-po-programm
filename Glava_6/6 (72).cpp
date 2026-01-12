#include <iostream>
using namespace std;

int main() {
    double x1, y1, w1, h1, x2, y2, w2, h2;
    cin >> x1 >> y1 >> w1 >> h1 >> x2 >> y2 >> w2 >> h2;

    double x1_max = x1 + w1, y1_max = y1 + h1;
    double x2_max = x2 + w2, y2_max = y2 + h2;

    bool a = (x1 >= x2) && (y1 >= y2) && (x1_max <= x2_max) && (y1_max <= y2_max);
    bool b = a || ((x2 >= x1) && (y2 >= y1) && (x2_max <= x1_max) && (y2_max <= y1_max));
    bool c = !(x1_max <= x2 || x2_max <= x1 || y1_max <= y2 || y2_max <= y1);

    cout << boolalpha << a << endl;
    cout << boolalpha << b << endl;
    cout << boolalpha << c << endl;

    return 0;
}