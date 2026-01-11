#include <iostream>
#include <cmath>

int main() {
    int n, a;

    std::cout << "Введите трехзначное число: ";
    std::cin >> n;
    std::cout << "Введите число a: ";
    std::cin >> a;

    n = abs(n);

    if (n < 100 || n > 999) {
        std::cout << "Ошибка: число должно быть трехзначным" << std::endl;
        return 1;
    }

    int firstDigit = n / 100;
    int secondDigit = (n / 10) % 10;
    int thirdDigit = n % 10;

    int digitSum = firstDigit + secondDigit + thirdDigit;
    int digitProduct = firstDigit * secondDigit * thirdDigit;

    // а) Является ли сумма цифр двузначным числом
    if (digitSum >= 10 && digitSum <= 99) {
        std::cout << "Сумма цифр является двузначным числом" << std::endl;
    }
    else {
        std::cout << "Сумма цифр не является двузначным числом" << std::endl;
    }

    // б) Является ли произведение цифр трехзначным числом
    if (digitProduct >= 100 && digitProduct <= 999) {
        std::cout << "Произведение цифр является трехзначным числом" << std::endl;
    }
    else {
        std::cout << "Произведение цифр не является трехзначным числом" << std::endl;
    }

    // в) Больше ли числа а произведение цифр
    if (digitProduct > a) {
        std::cout << "Произведение цифр больше числа a" << std::endl;
    }
    else if (digitProduct == a) {
        std::cout << "Произведение цифр равно числу a" << std::endl;
    }
    else {
        std::cout << "Произведение цифр меньше числа a" << std::endl;
    }

    // г) Кратна ли пяти сумма цифр
    if (digitSum % 5 == 0) {
        std::cout << "Сумма цифр кратна пяти" << std::endl;
    }
    else {
        std::cout << "Сумма цифр не кратна пяти" << std::endl;
    }

    // д) Кратна ли сумма цифр числу а
    if (a != 0 && digitSum % a == 0) {
        std::cout << "Сумма цифр кратна числу a" << std::endl;
    }
    else if (a == 0) {
        std::cout << "Деление на ноль невозможно" << std::endl;
    }
    else {
        std::cout << "Сумма цифр не кратна числу a" << std::endl;
    }

    return 0;
}