#include <iostream>
using namespace std;

int main() {
    int num;
    cin >> num;

    int d1 = num / 1000;
    int d2 = (num / 100) % 10;
    int d3 = (num / 10) % 10;
    int d4 = num % 10;

    bool part_a = (d1 == 4) || (d2 == 4) || (d3 == 4) || (d4 == 4);

    int b;
    cin >> b;
    bool part_b = (d1 == b) || (d2 == b) || (d3 == b) || (d4 == b);

    cout << boolalpha << part_a << endl;
    cout << boolalpha << part_b << endl;

    return 0;
}