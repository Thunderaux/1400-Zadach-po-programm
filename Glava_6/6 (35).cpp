#include <iostream>
#include <cmath>

int main() {
    int n, a;

    std::cout << "Введите четырехзначное число: ";
    std::cin >> n;
    std::cout << "Введите число a: ";
    std::cin >> a;

    n = abs(n);

    if (n < 1000 || n > 9999) {
        std::cout << "Ошибка: число должно быть четырехзначным" << std::endl;
        return 1;
    }

    int firstDigit = n / 1000;
    int secondDigit = (n / 100) % 10;
    int thirdDigit = (n / 10) % 10;
    int fourthDigit = n % 10;

    int sumFirstTwo = firstDigit + secondDigit;
    int sumLastTwo = thirdDigit + fourthDigit;
    int digitSum = firstDigit + secondDigit + thirdDigit + fourthDigit;
    int digitProduct = firstDigit * secondDigit * thirdDigit * fourthDigit;

    // а) Равна ли сумма первых двух цифр сумме последних двух
    if (sumFirstTwo == sumLastTwo) {
        std::cout << "Сумма первых двух цифр равна сумме последних двух" << std::endl;
    }
    else {
        std::cout << "Сумма первых двух цифр не равна сумме последних двух" << std::endl;
    }

    // б) Кратна ли трем сумма цифр
    if (digitSum % 3 == 0) {
        std::cout << "Сумма цифр кратна трем" << std::endl;
    }
    else {
        std::cout << "Сумма цифр не кратна трем" << std::endl;
    }

    // в) Кратно ли четырем произведение цифр
    if (digitProduct % 4 == 0) {
        std::cout << "Произведение цифр кратно четырем" << std::endl;
    }
    else {
        std::cout << "Произведение цифр не кратно четырем" << std::endl;
    }

    // г) Кратно ли произведение цифр числу а
    if (a != 0 && digitProduct % a == 0) {
        std::cout << "Произведение цифр кратно числу a" << std::endl;
    }
    else if (a == 0) {
        std::cout << "Деление на ноль невозможно" << std::endl;
    }
    else {
        std::cout << "Произведение цифр не кратно числу a" << std::endl;
    }

    return 0;
}