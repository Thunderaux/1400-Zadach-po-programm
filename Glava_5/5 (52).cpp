#include <iostream>
using namespace std;

int main() {
    int num;
    cin >> num;

    int d1 = num / 100;
    int d2 = (num / 10) % 10;
    int d3 = num % 10;

    bool result = (d1 == 6) || (d2 == 6) || (d3 == 6);

    cout << boolalpha << result << endl;

    return 0;
}