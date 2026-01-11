#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int d1 = n / 10;
    int d2 = n % 10;

    bool part_a = (d1 == 4) || (d2 == 4) || (d1 == 7) || (d2 == 7);
    bool part_b = (d1 == 3) || (d2 == 3) || (d1 == 6) || (d2 == 6) || (d1 == 9) || (d2 == 9);

    cout << boolalpha << part_a << endl;
    cout << boolalpha << part_b << endl;

    return 0;
}