#include <iostream>
using namespace std;

int main() {
    double a, b, c, d;
    cin >> a >> b >> c >> d;

    bool fits = (c + 2 <= a && d + 2 <= b) || (c + 2 <= b && d + 2 <= a);

    cout << boolalpha << fits << endl;

    return 0;
}