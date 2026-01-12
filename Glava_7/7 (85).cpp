#include <iostream>
#include <clocale>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    int n;
    cin >> n;

    int years = n / 12;
    int months = n % 12;

    if (years == 0) {
        if (months == 1) {
            cout << months << " месяц" << endl;
        }
        else if (months >= 2 && months <= 4) {
            cout << months << " месяца" << endl;
        }
        else {
            cout << months << " месяцев" << endl;
        }
    }
    else if (months == 0) {
        if (years % 10 == 1 && years != 11) {
            cout << years << " год ровно" << endl;
        }
        else if (years % 10 >= 2 && years % 10 <= 4 && (years < 10 || years > 20)) {
            cout << years << " года ровно" << endl;
        }
        else {
            cout << years << " лет ровно" << endl;
        }
    }
    else {
        if (years % 10 == 1 && years != 11) {
            cout << years << " год ";
        }
        else if (years % 10 >= 2 && years % 10 <= 4 && (years < 10 || years > 20)) {
            cout << years << " года ";
        }
        else {
            cout << years << " лет ";
        }

        if (months == 1) {
            cout << months << " месяц" << endl;
        }
        else if (months >= 2 && months <= 4) {
            cout << months << " месяца" << endl;
        }
        else {
            cout << months << " месяцев" << endl;
        }
    }

    return 0;
}