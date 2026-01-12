#include <iostream>
#include <clocale>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    int n;
    cin >> n;

    int rub = n / 100;
    int kop = n % 100;

    if (rub == 0) {
        if (kop % 10 == 1 && kop != 11) {
            cout << kop << " копейка" << endl;
        }
        else if (kop % 10 >= 2 && kop % 10 <= 4 && (kop < 10 || kop > 20)) {
            cout << kop << " копейки" << endl;
        }
        else {
            cout << kop << " копеек" << endl;
        }
    }
    else if (kop == 0) {
        if (rub % 10 == 1 && rub != 11) {
            cout << rub << " рубль ровно" << endl;
        }
        else if (rub % 10 >= 2 && rub % 10 <= 4 && (rub < 10 || rub > 20)) {
            cout << rub << " рубля ровно" << endl;
        }
        else {
            cout << rub << " рублей ровно" << endl;
        }
    }
    else {
        if (rub % 10 == 1 && rub != 11) {
            cout << rub << " рубль ";
        }
        else if (rub % 10 >= 2 && rub % 10 <= 4 && (rub < 10 || rub > 20)) {
            cout << rub << " рубля ";
        }
        else {
            cout << rub << " рублей ";
        }

        if (kop % 10 == 1 && kop != 11) {
            cout << kop << " копейка" << endl;
        }
        else if (kop % 10 >= 2 && kop % 10 <= 4 && (kop < 10 || kop > 20)) {
            cout << kop << " копейки" << endl;
        }
        else {
            cout << kop << " копеек" << endl;
        }
    }

    return 0;
}