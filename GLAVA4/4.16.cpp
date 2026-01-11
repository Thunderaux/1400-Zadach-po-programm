#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    double a, b, c;  

    cout << "Введите коэффициент a: ";
    cin >> a;

    if (a == 0)
    {
        cout << "Ошибка: коэффициент a должен быть не равен нулю!" << endl;
        return 1;
    }

    cout << "Введите коэффициент b: ";
    cin >> b;
    cout << "Введите коэффициент c: ";
    cin >> c;

    double D = b * b - 4 * a * c;

    if (D >= 0)  
    {
        double x1 = (-b + sqrt(D)) / (2 * a);
        double x2 = (-b - sqrt(D)) / (2 * a);

        cout << "Уравнение имеет вещественные корни:" << endl;
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    }
    else 
    {
        cout << "У уравнения нет вещественных корней" << endl;
    }

    return 0;
}