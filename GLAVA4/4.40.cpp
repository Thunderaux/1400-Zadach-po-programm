#include <iostream>

int main() {
    double number;

    std::cout << "Введите число: ";
    std::cin >> number;

    if (number > -5 && number < 3) {
        std::cout << "Число принадлежит интервалу (-5, 3)" << std::endl;
    }
    else {
        std::cout << "Число НЕ принадлежит интервалу (-5, 3)" << std::endl;
    }

    return 0;
}