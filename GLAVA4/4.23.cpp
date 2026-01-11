#include <iostream>

int main() {
    setlocale(LC_ALL, "Russian");
    int a, n;

    std::cout << "Введите число n: ";
    std::cin >> n;
    std::cout << "Введите число a: ";
    std::cin >> a;

    if (a != 0 && n % a == 0) {
        std::cout << a << " является делителем " << n << std::endl;
    }
    else if (a == 0) {
        std::cout << "На ноль делить нельзя" << std::endl;
    }
    else {
        std::cout << a << " не является делителем " << n << std::endl;
    }

    return 0;
}