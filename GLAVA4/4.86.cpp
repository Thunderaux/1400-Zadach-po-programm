#include <iostream>
using namespace std;

int main() {
    int birth_year, birth_month, birth_day;
    int current_year, current_month, current_day;

    cin >> birth_year >> birth_month >> birth_day;
    cin >> current_year >> current_month >> current_day;

    int age = current_year - birth_year;

    if (current_month < birth_month || (current_month == birth_month && current_day < birth_day)) {
        age--;
    }

    cout << age << endl;

    return 0;
}