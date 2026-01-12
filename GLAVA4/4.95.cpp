#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n == 1) {
        cout << 0 << endl;
    }
    else {
        n -= 1;
        if (n <= 18) {
            int number = (n + 1) / 2;
            if (n % 2 == 1) {
                cout << number % 10 << endl;
            }
            else {
                cout << number / 10 << endl;
            }
        }
        else {
            n -= 18;
            int number = 10 + n / 3;
            if (n % 3 == 1) {
                cout << 1 << endl;
            }
            else if (n % 3 == 2) {
                cout << number / 10 << endl;
            }
            else {
                cout << number % 10 << endl;
            }
        }
    }

    return 0;
}