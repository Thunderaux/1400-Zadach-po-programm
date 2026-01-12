#include <iostream>
#include <algorithm>

struct Point {
    double x, y;
};

struct Rectangle {
    Point lowerLeft;
    double width, height;

    Point upperRight() const {
        return { lowerLeft.x + width, lowerLeft.y + height };
    }
};

int main() {
    setlocale(LC_ALL, "Russian");
    Rectangle rect1, rect2;

    std::cout << "Прямоугольник 1 (x y width height): ";
    std::cin >> rect1.lowerLeft.x >> rect1.lowerLeft.y >> rect1.width >> rect1.height;

    std::cout << "Прямоугольник 2 (x y width height): ";
    std::cin >> rect2.lowerLeft.x >> rect2.lowerLeft.y >> rect2.width >> rect2.height;

    Point ur1 = rect1.upperRight();
    Point ur2 = rect2.upperRight();

    double minX = std::min(rect1.lowerLeft.x, rect2.lowerLeft.x);
    double minY = std::min(rect1.lowerLeft.y, rect2.lowerLeft.y);
    double maxX = std::max(ur1.x, ur2.x);
    double maxY = std::max(ur1.y, ur2.y);

    std::cout << "Охватывающий прямоугольник:\n";
    std::cout << "Левый нижний: (" << minX << ", " << minY << ")\n";
    std::cout << "Правый верхний: (" << maxX << ", " << maxY << ")\n";

    return 0;
}