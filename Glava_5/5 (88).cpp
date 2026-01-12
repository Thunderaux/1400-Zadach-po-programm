#include <iostream>
using namespace std;

int main() {
    int birth_year, birth_month;
    int current_year, current_month;

    cin >> birth_year >> birth_month;
    cin >> current_year >> current_month;

    int full_years = current_year - birth_year;
    int full_months = current_month - birth_month;

    if (full_months < 0) {
        full_years--;
        full_months += 12;
    }

    cout << full_years << " " << full_months << endl;

    return 0;
}