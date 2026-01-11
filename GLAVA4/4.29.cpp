#include <iostream>
#include <cmath>

int main() {
    setlocale(LC_ALL, "Russian");
    int n, a;

    std::cout << "Введите двузначное число: ";
    std::cin >> n;
    std::cout << "Введите число a: ";
    std::cin >> a;

    n = abs(n);

    if (n < 10 || n > 99) {
        std::cout << "Ошибка: число должно быть двузначным" << std::endl;
        return 1;
    }

    int firstDigit = n / 10;
    int secondDigit = n % 10;
    int digitSum = firstDigit + secondDigit;

    // а) Кратна ли трем сумма цифр
    if (digitSum % 3 == 0) {
        std::cout << "Сумма цифр кратна трем" << std::endl;
    }
    else {
        std::cout << "Сумма цифр не кратна трем" << std::endl;
    }

    // б) Кратна ли сумма цифр числу a
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