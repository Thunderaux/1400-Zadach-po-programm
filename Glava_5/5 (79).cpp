#include <iostream>
using namespace std;

int main() {
    double a, b, c;
    cin >> a >> b >> c;

    bool exists = (a + b > c) && (a + c > b) && (b + c > a);

    cout << boolalpha << exists << endl;

    return 0;
}