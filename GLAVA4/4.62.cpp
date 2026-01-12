#include <iostream>
using namespace std;

int main() {
    double a, b, c, d;
    cin >> a >> b >> c >> d;

    bool fits = (a <= c && b <= d) || (a <= d && b <= c);

    cout << boolalpha << fits << endl;

    return 0;
}