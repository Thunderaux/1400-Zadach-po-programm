#include <iostream>
using namespace std;

int main() {
    int g, m, n;
    cin >> g >> m >> n;

    bool leap = (g % 400 == 0) || (g % 4 == 0 && g % 100 != 0);

    int days_in_month;
    if (m == 2) {
        days_in_month = leap ? 29 : 28;
    }
    else if (m == 4 || m == 6 || m == 9 || m == 11) {
        days_in_month = 30;
    }
    else {
        days_in_month = 31;
    }

    int prev_day, prev_month, prev_year, next_day, next_month, next_year;

    if (n > 1) {
        prev_day = n - 1;
        prev_month = m;
        prev_year = g;
    }
    else {
        if (m > 1) {
            prev_month = m - 1;
            if (prev_month == 2) {
                prev_day = leap ? 29 : 28;
            }
            else if (prev_month == 4 || prev_month == 6 || prev_month == 9 || prev_month == 11) {
                prev_day = 30;
            }
            else {
                prev_day = 31;
            }
            prev_year = g;
        }
        else {
            prev_month = 12;
            prev_day = 31;
            prev_year = g - 1;
        }
    }

    if (n < days_in_month) {
        next_day = n + 1;
        next_month = m;
        next_year = g;
    }
    else {
        if (m < 12) {
            next_day = 1;
            next_month = m + 1;
            next_year = g;
        }
        else {
            next_day = 1;
            next_month = 1;
            next_year = g + 1;
        }
    }

    cout << prev_day << " " << prev_month << " " << prev_year << endl;
    cout << next_day << " " << next_month << " " << next_year << endl;

    return 0;
}