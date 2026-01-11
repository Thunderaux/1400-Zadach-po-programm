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

    int square = n * n;
    int sumOfCubes = pow(firstDigit, 3) + pow(secondDigit, 3);
    int quadrupleSum = 4 * sumOfCubes;

    if (square == quadrupleSum) {
        std::cout << "Квадрат числа равен учетверенной сумме кубов его цифр" << std::endl;
    }
    else {
        std::cout << "Квадрат числа НЕ равен учетверенной сумме кубов его цифр" << std::endl;
    }

    return 0;
}