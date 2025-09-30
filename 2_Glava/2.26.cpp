/* Даны координаты на плоскости двух точек. Найти расстояние между этими точками.*/

#include <iostream>
#include <cmath>

int main() {
	setlocale(LC_ALL, "Russian");
	double x1, y1, x2, y2, d;
	
	std::cout << "Введите координаты первой точки (x1, y1): ";
	std::cin >> x1 >> y1;
	
	std::cout << "Введите координаты второй точки (x2, y2): ";
	std::cin >> x2 >> y2;

	d = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
	std::cout << "Расстояние между точками: " << d << std::endl;

	return 0;
}