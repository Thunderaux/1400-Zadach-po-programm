#include <iostream>
using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int remainder = a % b;
    bool result = (remainder == c) || (remainder == d);

    cout << boolalpha << result << endl;

    return 0;
}