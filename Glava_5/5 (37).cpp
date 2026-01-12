#include <iostream>

int main() {
    int a, b;

    std::cout << "Введите два числа:\n";
    std::cout << "a = ";
    std::cin >> a;
    std::cout << "b = ";
    std::cin >> b;

    // Является ли a делителем b
    if (a != 0 && b % a == 0) {
        std::cout << "a является делителем b" << std::endl;
    }
    else if (a == 0) {
        std::cout << "a не может быть делителем (ноль)" << std::endl;
    }
    else {
        std::cout << "a НЕ является делителем b" << std::endl;
    }

    // Является ли b делителем a
    if (b != 0 && a % b == 0) {
        std::cout << "b является делителем a" << std::endl;
    }
    else if (b == 0) {
        std::cout << "b не может быть делителем (ноль)" << std::endl;
    }
    else {
        std::cout << "b НЕ является делителем a" << std::endl;
    }

    return 0;
}
