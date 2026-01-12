#include <iostream>
#include <cmath>

int main() {
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

    // а) Все ли цифры одинаковые
    if (firstDigit == secondDigit && secondDigit == thirdDigit) {
        std::cout << "Все три цифры одинаковые" << std::endl;
    }
    else {
        std::cout << "Не все цифры одинаковые" << std::endl;
    }

    // б) Есть ли среди цифр одинаковые
    if (firstDigit == secondDigit || firstDigit == thirdDigit || secondDigit == thirdDigit) {
        std::cout << "Среди цифр есть одинаковые" << std::endl;
    }
    else {
        std::cout << "Все цифры различны" << std::endl;
    }

    return 0;
}