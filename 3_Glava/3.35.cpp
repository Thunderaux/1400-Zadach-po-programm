#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int n;

    cout << "Введите число n (1 <= n <= 999): ";
    cin >> n;

    if (n < 1 || n > 999) {
        cout << "Ошибка: n должно быть в диапазоне 1 ≤ n ≤ 999" << endl;
        return 1;
    }

  
    int a = n % 10;          
    int bc = n / 10;         

   
    int x = a * 100 + bc;

    cout << "Исходное число x: " << x << endl;
    return 0;
}