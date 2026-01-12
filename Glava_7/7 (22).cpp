#include <iostream>

int main() {
    setlocale(LC_ALL, "Russian");
    int m, n;

    std::cout << "Введите два целых числа (m и n): ";
    std::cin >> m >> n;

    if (n == 0) {
        std::cout << "Ошибка: деление на ноль невозможно." << std::endl;
    }
    else if (m % n == 0) {
        std::cout << "Частное: " << m / n << std::endl;
    }
    else {
        std::cout << m << " на " << n << " нацело не делится." << std::endl;
    }

    return 0;
}