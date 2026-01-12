#include <iostream>
using namespace std;

int main() {
    int n, a;
    cin >> n >> a;

    int last = a + n - 1;

    int first_parity = a % 2;
    int last_parity = last % 2;

    bool sum_even;
    if (first_parity == last_parity) {
        sum_even = (n % 4 == 0) || (n % 4 == 3);
    }
    else {
        sum_even = (n % 4 == 0) || (n % 4 == 1);
    }

    cout << boolalpha << sum_even << endl;

    return 0;
}