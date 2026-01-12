#include <iostream>
using namespace std;

int main() {
    double x;
    cin >> x;

    double abs_val = x;
    if (x < 0)
        abs_val = -x;

    cout << abs_val << endl;

    return 0;
}