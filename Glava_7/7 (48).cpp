#include <iostream>
using namespace std;

int main() {
    int x, y;
    cin >> x >> y;

    bool result = (y != 0 && x % y == 0) || (x != 0 && y % x == 0);

    cout << boolalpha << result << endl;

    return 0;
}