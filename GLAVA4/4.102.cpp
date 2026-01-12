#include <iostream>
using namespace std;

int main() {
    double a, b, c, d;
    cin >> a >> b >> c >> d;

    double max_val = a;
    if (b > max_val) max_val = b;
    if (c > max_val) max_val = c;
    if (d > max_val) max_val = d;

    double min_val = a;
    if (b < min_val) min_val = b;
    if (c < min_val) min_val = c;
    if (d < min_val) min_val = d;

    cout << max_val << " " << min_val << endl;

    return 0;
}