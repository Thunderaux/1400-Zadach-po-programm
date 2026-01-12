#include <iostream>
using namespace std;

int main() {
    int num;
    cin >> num;

    int d1 = num / 1000;
    int d2 = (num / 100) % 10;
    int d3 = (num / 10) % 10;
    int d4 = num % 10;

    bool part_a = (d1 == 2) || (d2 == 2) || (d3 == 2) || (d4 == 2) ||
        (d1 == 7) || (d2 == 7) || (d3 == 7) || (d4 == 7);

    bool part_b = (d1 == 3) || (d2 == 3) || (d3 == 3) || (d4 == 3) ||
        (d1 == 6) || (d2 == 6) || (d3 == 6) || (d4 == 6) ||
        (d1 == 9) || (d2 == 9) || (d3 == 9) || (d4 == 9);

    cout << boolalpha << part_a << endl;
    cout << boolalpha << part_b << endl;

    return 0;
}