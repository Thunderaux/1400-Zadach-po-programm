#include <iostream>
#include <cmath>

int main()
{
	setlocale(LC_ALL, "Russian");
	int x, y, a, b;
	std::cout << "Введите значение x: ";
	std::cin >> x;

	std::cout << "Введите значение y: ";
	std::cin >> y;

	std::cout << "Введите значение a: ";
	std::cin >> a;

	std::cout << "Введите значение b: ";
	std::cin >> b;

	double z = 2 * pow(x, 3) - 3.44 * x * y + 2.3 * pow(x, 2) - 7.1 * y + 2;
	double c = 3.14 * pow((a + b), 3) + 2.75 * pow(b, 2) - 12.7 * a - 4.1;

	std::cout << "a) z = 2x^3 - 3,44xy + 2,3x^2 -  7,1y + 2 при x = " << x << " и y = " << y << " равно " << z << std::endl;
	std::cout << "b) c = 3,14(a + b)^3 + 2,75b^2 - 12,7a - 4,1 при a = " << a << " и b = " << b << " равно " << c << std::endl;

	std::system("pause");
	return 0;
}