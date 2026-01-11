#include <iostream>

int main() {
    double t;

    std::cout << "Введите время t (в минутах, прошедшее с начала часа): ";
    std::cin >> t;

    // Нормализуем время в пределах 5-минутного цикла
    double cycleTime = t;
    while (cycleTime >= 5.0) {
        cycleTime -= 5.0;
    }

    // Определяем цвет сигнала
    if (cycleTime < 3.0) {
        std::cout << "Горит ЗЕЛЕНЫЙ сигнал" << std::endl;
    }
    else {
        std::cout << "Горит КРАСНЫЙ сигнал" << std::endl;
    }

    return 0;
}