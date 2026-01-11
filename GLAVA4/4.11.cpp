#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    double kmh, ms;

    cout << "Введите скорость в км/ч: ";
    cin >> kmh;

    cout << "Введите скорость в м/с: ";
    cin >> ms;

    
    double kmh_to_ms = kmh / 3.6;

    cout << kmh << " км/ч = " << kmh_to_ms << " м/с" << endl;
    cout << ms << " м/с = " << ms << " м/с" << endl;

    if (kmh_to_ms > ms) {
        cout << "Скорость в км/ч больше" << endl;
    }
    else if (kmh_to_ms < ms) {
        cout << "Скорость в м/с больше" << endl;
    }
    else {
        cout << "Скорости равны" << endl;
    }

    return 0;
}