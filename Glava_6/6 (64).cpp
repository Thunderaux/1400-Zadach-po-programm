#include <iostream>
using namespace std;

int main() {
    double a, b, d;
    cin >> a >> b >> d;

    bool fits = (d + 2 <= a) && (d + 2 <= b);

    cout << boolalpha << fits << endl;

    return 0;
}