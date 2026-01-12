#include <iostream>
using namespace std;

int main() {
    double a, b, c;
    cin >> a >> b >> c;

    bool result = (a == b) || (a == c) || (b == c);

    cout << boolalpha << result << endl;

    return 0;
}