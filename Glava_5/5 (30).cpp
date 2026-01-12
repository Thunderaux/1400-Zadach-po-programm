#include <iostream>
#include <cmath>

int main() {
    setlocale(LC_ALL, "Russian");
    int n;

    std::cout << "Введите трехзначное число: ";
    std::cin >> n;

    n = abs(n);

    if (n < 100 || n > 999) {
        std::cout << "Ошибка: число должно быть трехзначным" << std::endl;
        return 1;
    }

    int firstDigit = n / 100;
    int secondDigit = (n / 10) % 10;
    int thirdDigit = n % 10;

    if (firstDigit == thirdDigit) {
        std::cout << "Число является палиндромом" << std::endl;
    }
    else {
        std::cout << "Число не является палиндромом" << std::endl;
    }

    return 0;
}