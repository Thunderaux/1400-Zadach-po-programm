#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    double U1, R1, U2, R2;

    
    cout << "Введите напряжение U1 и сопротивление R1 первого участка: ";
    cin >> U1 >> R1;

    cout << "Введите напряжение U2 и сопротивление R2 второго участка: ";
    cin >> U2 >> R2;

    
    if (R1 <= 0 || R2 <= 0) {
        cout << "Ошибка: сопротивление должно быть положительным числом!" << endl;
        return 1;
    }

    
    double I1 = U1 / R1;
    double I2 = U2 / R2;

    
    cout << "\nРезультаты расчетов:" << endl;
    cout << "Ток на первом участке I1 = " << I1 << " А" << endl;
    cout << "Ток на втором участке I2 = " << I2 << " А" << endl;
    cout << endl;

    if (I1 < I2) {
        cout << "Меньший ток протекает по ПЕРВОМУ участку (I1 < I2)" << endl;
    }
    else if (I2 < I1) {
        cout << "Меньший ток протекает по ВТОРОМУ участку (I2 < I1)" << endl;
    }
    else {
        cout << "Токи на обоих участках РАВНЫ (I1 = I2)" << endl;
    }

    return 0;
}