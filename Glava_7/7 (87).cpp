#include <iostream>
using namespace std;

int main() {
    int year1, month1, day1;
    int year2, month2, day2;

    cin >> year1 >> month1 >> day1;
    cin >> year2 >> month2 >> day2;

    if (year1 < year2 || (year1 == year2 && month1 < month2) ||
        (year1 == year2 && month1 == month2 && day1 < day2)) {
        cout << "1" << endl;
    }
    else if (year1 > year2 || (year1 == year2 && month1 > month2) ||
        (year1 == year2 && month1 == month2 && day1 > day2)) {
        cout << "2" << endl;
    }
    else {
        cout << "Same age" << endl;
    }

    return 0;
}