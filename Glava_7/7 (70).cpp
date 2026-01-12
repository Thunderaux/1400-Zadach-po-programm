#include <iostream>
using namespace std;

int main() {
    int k;
    cin >> k;

    int day = (k - 1) % 7;

    bool weekend = (day == 5) || (day == 6);

    cout << boolalpha << weekend << endl;

    return 0;
}