#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int n;

    cout << "Введите число n (100 <= n <= 999): ";
    cin >> n;

    if (n < 100 || n > 999) {
        cout << "Ошибка: n должно быть в диапазоне 100 <= n <= 999" << endl;
        return 1;
    }

    int a = n / 100;        
    int cb = n % 100;       

    int c = cb / 10;          
    int b = cb % 10;        
    int x = 100 * a + 10 * b + c;

    cout << "Исходное число x: " << x << endl;
    return 0;
}