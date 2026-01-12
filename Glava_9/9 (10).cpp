#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    double km, feet;

    cout << "Введите расстояние в километрах: ";
    cin >> km;

    cout << "Введите расстояние в футах: ";
    cin >> feet;

    // Переводим в метры
    double meters_km = km * 1000;
    double meters_feet = feet * 0.3048;

    cout << km << " км = " << meters_km << " м" << endl;
    cout << feet << " футов = " << meters_feet << " м" << endl;

    if (meters_km < meters_feet) {
        cout << "Расстояние в километрах меньше" << endl;
    }
    else if (meters_km > meters_feet) {
        cout << "Расстояние в футах меньше" << endl;
    }
    else {
        cout << "Расстояния равны" << endl;
    }

    return 0;
}