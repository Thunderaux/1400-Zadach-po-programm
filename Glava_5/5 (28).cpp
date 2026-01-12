#include <iostream>
#include <cmath>

int main() {
    setlocale(LC_ALL, "Russian");
    int n, a;

    std::cout << "Введите двузначное число: ";
    std::cin >> n;
    std::cout << "Введите число a для сравнения: ";
    std::cin >> a;

    n = abs(n);

    if (n < 10 || n > 99) {
        std::cout << "Ошибка: число должно быть двузначным" << std::endl;
        return 1;
    }

    int firstDigit = n / 10;
    int secondDigit = n % 10;
    int digitSum = firstDigit + secondDigit;

    // а) Является ли сумма цифр двузначным числом
    if (digitSum >= 10 && digitSum <= 99) {
        std::cout << "Сумма цифр является двузначным числом" << std::endl;
    }
    else {
        std::cout << "Сумма цифр не является двузначным числом" << std::endl;
    }

    // б) Больше ли числа a сумма цифр
    if (digitSum > a) {
        std::cout << "Сумма цифр (" << digitSum << ") больше числа a (" << a << ")" << std::endl;
    }
    else if (digitSum == a) {
        std::cout << "Сумма цифр (" << digitSum << ") равна числу a (" << a << ")" << std::endl;
    }
    else {
        std::cout << "Сумма цифр (" << digitSum << ") меньше числа a (" << a << ")" << std::endl;
    }

    return 0;
}