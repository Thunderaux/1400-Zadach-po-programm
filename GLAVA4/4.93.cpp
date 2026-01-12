#include <iostream>
using namespace std;

int main() {
    int k, d;
    cin >> k >> d;

    int day_of_week = (k + d - 2) % 7;

    if (day_of_week == 5) {
        cout << "saturday" << endl;
    }
    else if (day_of_week == 6) {
        cout << "sunday" << endl;
    }
    else {
        cout << "workday" << endl;
    }

    return 0;
}