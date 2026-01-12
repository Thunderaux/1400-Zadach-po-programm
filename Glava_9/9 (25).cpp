#include <iostream>

int main() {
    setlocale(LC_ALL, "Russian");
    int n;

    std::cout << "Введите целое число: ";
    std::cin >> n;

    int nextEven;

    if (n % 2 == 0) {
        nextEven = n + 2;
    }
    else {
        nextEven = n + 1;
    }

    std::cout << "Следующее четное число: " << nextEven << std::endl;

    return 0;
}