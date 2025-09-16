#include <iostream>
#include <cmath>

int main()
{
	setlocale(LC_ALL, "Russian");
	int a, b, c;
	std::cout << "Введите катеты прямоугольного треугольника: ";
	std::cin >> a >> b;

	c = sqrt(pow(a, 2) + pow(b, 2));
	if ((c > a) && (c > b) && (a + b > c))
	{
		int P = a + b + c;
		std::cout << "Периметр прямоугольного треугольника = " << P << std::endl;
	}
	else
	{
		std::cout << "Катеты заданы не правильно" << std::endl;
	}
	std::system("pause");
	return 0;
}