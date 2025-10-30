#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int n;

    cout << "Введите число n (1 <= n <= 999, число единиц != 0): ";
    cin >> n;

    if (n < 1 || n > 999) {
        cout << "Ошибка: n должно быть в диапазоне 1 <= n <= 999" << endl;
        return 1;
    }

    if (n % 10 == 0) {
        cout << "Ошибка: число единиц в n равно нулю" << endl;
        return 1;
    }

    int c = n / 100;
    int ba = n % 100;
    int b = ba / 10;
    int a = ba % 10;

    int x = 100 * a + 10 * b + c;

    cout << "Исходное число x: " << x << endl;
    return 0;
}