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

    int square = n * n;
    int sumCubes = pow(firstDigit, 3) + pow(secondDigit, 3) + pow(thirdDigit, 3);

    if (square == sumCubes) {
        std::cout << "Квадрат числа равен сумме кубов его цифр" << std::endl;
    }
    else {
        std::cout << "Квадрат числа НЕ равен сумме кубов его цифр" << std::endl;
    }

    return 0;
}