#include <iostream>
using namespace std;

int main() {
    int num;
    cin >> num;

    int d1 = num / 100;
    int d2 = (num / 10) % 10;
    int d3 = num % 10;

    bool part_a = (d1 == 6) || (d2 == 6) || (d3 == 6);

    int n;
    cin >> n;
    bool part_b = (d1 == n) || (d2 == n) || (d3 == n);

    cout << boolalpha << part_a << endl;
    cout << boolalpha << part_b << endl;

    return 0;
}