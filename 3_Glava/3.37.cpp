#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int n;

    cout << "Введите число n (10 <= n <= 999, число десятков != 0): ";
    cin >> n;

    if (n < 10 || n > 999) {
        cout << "Ошибка: n должно быть в диапазоне 10 <= n <= 999" << endl;
        return 1;
    }

    if ((n / 10) % 10 == 0) {
        cout << "Ошибка: число десятков в n равно нулю" << endl;
        return 1;
    }

    int b = n / 100;        
    int ac = n % 100;       

    int a = ac / 10;        
    int c = ac % 10;        

    int x = 100 * a + 10 * b + c;

    cout << "Исходное число x: " << x << endl;
    return 0;
}
