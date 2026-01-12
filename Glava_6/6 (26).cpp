#include <iostream>
#include <cmath>

int main() {
    setlocale(LC_ALL, "Russian");
    int n;

    std::cout << "Введите двузначное число: ";
    std::cin >> n;

    n = abs(n);

    if (n < 10 || n > 99) {
        std::cout << "Ошибка: число должно быть двузначным" << std::endl;
        return 1;
    }

    int firstDigit = n / 10;
    int secondDigit = n % 10;

    if (firstDigit > secondDigit) {
        std::cout << "Первая цифра больше второй" << std::endl;
    }
    else if (secondDigit > firstDigit) {
        std::cout << "Вторая цифра больше первой" << std::endl;
    }
    else {
        std::cout << "Цифры одинаковы" << std::endl;
    }

    if (firstDigit == secondDigit) {
        std::cout << "Цифры числа одинаковы" << std::endl;
    }
    else {
        std::cout << "Цифры числа различны" << std::endl;
    }

    return 0;
}