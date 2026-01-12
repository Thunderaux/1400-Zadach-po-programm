#include <iostream>

int main() {
    double x, y;

    std::cout << "Введите координаты точки (x y): ";
    std::cin >> x >> y;

    if (x > -2 && x < 3 && y > 1 && y < 4) {
        std::cout << "Точка попадает в область I" << std::endl;
    }
    else {
        std::cout << "Точка НЕ попадает в область I" << std::endl;
    }

    return 0;
}