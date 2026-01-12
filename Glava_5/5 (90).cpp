#include <iostream>
using namespace std;

int main() {
    int m, n;
    cin >> m >> n;

    int days_in_month;
    if (m == 2) {
        days_in_month = 28;
    }
    else if (m == 4 || m == 6 || m == 9 || m == 11) {
        days_in_month = 30;
    }
    else {
        days_in_month = 31;
    }

    int prev_day, prev_month, next_day, next_month;

    if (n > 1) {
        prev_day = n - 1;
        prev_month = m;
    }
    else {
        prev_month = m - 1;
        if (prev_month == 2) {
            prev_day = 28;
        }
        else if (prev_month == 4 || prev_month == 6 || prev_month == 9 || prev_month == 11) {
            prev_day = 30;
        }
        else {
            prev_day = 31;
        }
    }

    if (n < days_in_month) {
        next_day = n + 1;
        next_month = m;
    }
    else {
        next_day = 1;
        next_month = m + 1;
    }

    cout << prev_day << " " << prev_month << endl;
    cout << next_day << " " << next_month << endl;

    return 0;
}