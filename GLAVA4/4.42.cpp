#include <iostream>

int main() {
    double x, y;

    std::cout << "Введите координаты точки (x y): ";
    std::cin >> x >> y;

    if (x > -4 && x < 2 && y > 0 && y < 2) {
        std::cout << "Точка попадает в область I" << std::endl;
    }
    else {
        std::cout << "Точка НЕ попадает в область I" << std::endl;
    }

    return 0;
}