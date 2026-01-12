#include <iostream>

int main() {
    setlocale(LC_ALL, "Russian");
    int n;

    std::cout << "Введите натуральное число: ";
    std::cin >> n;

    if (n % 2 == 0) {
        std::cout << "Число четное" << std::endl;
    }
    else {
        std::cout << "Число нечетное" << std::endl;
    }

    if (n % 10 == 7 || n % 10 == -7) {
        std::cout << "Число оканчивается цифрой 7" << std::endl;
    }
    else {
        std::cout << "Число не оканчивается цифрой 7" << std::endl;
    }

    return 0;
}