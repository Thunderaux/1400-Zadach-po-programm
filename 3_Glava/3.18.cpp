#include <iostream>
using namespace std;

int main() {
   
    setlocale(LC_ALL, "Russian");
    int n, reversed = 0;
    cout << "Введите двузначное число: ";
    cin >> n;

    if ((n < 10) || (n > 99)) 
    {
        cout << "Вы ввели не двузначное число";
        return 1;
    }
        
    while (n != 0) {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }

    cout << "Перевёрнутое число: " << reversed << endl;
    return 0;
}
