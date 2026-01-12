#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int d1 = n / 10;
    int d2 = n % 10;

    bool part_a = (d1 == 3) || (d2 == 3);

    int a;
    cin >> a;
    bool part_b = (d1 == a) || (d2 == a);

    cout << boolalpha << part_a << endl;
    cout << boolalpha << part_b << endl;

    return 0;
}