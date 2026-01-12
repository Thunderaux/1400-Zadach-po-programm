#include <iostream>
using namespace std;

int main() {
    double a1, a2, a3, b1, b2, b3;
    cin >> a1 >> a2 >> a3 >> b1 >> b2 >> b3;

    bool fits =
        (b1 <= a1 && b2 <= a2 && b3 <= a3) ||
        (b1 <= a1 && b2 <= a3 && b3 <= a2) ||
        (b1 <= a2 && b2 <= a1 && b3 <= a3) ||
        (b1 <= a2 && b2 <= a3 && b3 <= a1) ||
        (b1 <= a3 && b2 <= a1 && b3 <= a2) ||
        (b1 <= a3 && b2 <= a2 && b3 <= a1);

    cout << boolalpha << fits << endl;

    return 0;
}