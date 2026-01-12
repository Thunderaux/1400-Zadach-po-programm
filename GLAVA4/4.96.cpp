#include <iostream>
using namespace std;

int main() {
    int k;
    cin >> k;

    int start = 50;
    int current = start;
    int digits_used = 0;

    while (true) {
        int num_digits;
        if (current < 100) {
            num_digits = 2;
        }
        else if (current < 250) {
            num_digits = 3;
        }
        else {
            num_digits = 3;
        }

        if (digits_used + num_digits >= k) {
            int position_in_num = k - digits_used - 1;
            if (num_digits == 2) {
                if (position_in_num == 0) {
                    cout << current / 10 << endl;
                }
                else {
                    cout << current % 10 << endl;
                }
            }
            else {
                if (position_in_num == 0) {
                    cout << current / 100 << endl;
                }
                else if (position_in_num == 1) {
                    cout << (current / 10) % 10 << endl;
                }
                else {
                    cout << current % 10 << endl;
                }
            }
            break;
        }

        digits_used += num_digits;
        current++;
        if (current > 250) break;
    }

    return 0;
}