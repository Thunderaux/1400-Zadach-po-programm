#include <iostream>

int main() {
    int n;

    std::cout << "Введите натуральное число: ";
    std::cin >> n;

    int lastDigit = abs(n) % 10;

    // а) Заканчивается ли четной цифрой
    if (lastDigit % 2 == 0) {
        std::cout << "Число заканчивается четной цифрой" << std::endl;
    }
    else {
        std::cout << "Число НЕ заканчивается четной цифрой" << std::endl;
    }

    // б) Заканчивается ли нечетной цифрой
    if (lastDigit % 2 != 0) {
        std::cout << "Число заканчивается нечетной цифрой" << std::endl;
    }
    else {
        std::cout << "Число НЕ заканчивается нечетной цифрой" << std::endl;
    }

    return 0;
}