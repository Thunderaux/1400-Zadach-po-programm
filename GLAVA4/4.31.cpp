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

    // а) Первая или последняя
    if (firstDigit > thirdDigit) {
        std::cout << "Первая цифра больше последней" << std::endl;
    }
    else if (thirdDigit > firstDigit) {
        std::cout << "Последняя цифра больше первой" << std::endl;
    }
    else {
        std::cout << "Первая и последняя цифры равны" << std::endl;
    }

    // б) Первая или вторая
    if (firstDigit > secondDigit) {
        std::cout << "Первая цифра больше второй" << std::endl;
    }
    else if (secondDigit > firstDigit) {
        std::cout << "Вторая цифра больше первой" << std::endl;
    }
    else {
        std::cout << "Первая и вторая цифры равны" << std::endl;
    }

    // в) Вторая или последняя
    if (secondDigit > thirdDigit) {
        std::cout << "Вторая цифра больше последней" << std::endl;
    }
    else if (thirdDigit > secondDigit) {
        std::cout << "Последняя цифра больше второй" << std::endl;
    }
    else {
        std::cout << "Вторая и последняя цифры равны" << std::endl;
    }

    return 0;
}