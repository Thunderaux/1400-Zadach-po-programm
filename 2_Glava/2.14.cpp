#include <iostream>
#include <cmath>

int main()
{
	setlocale(LC_ALL, "Russian");
	int a, b, c;
	
	std::cout << "Введите катет a: ";
	std::cin >> a;

	std::cout << "Введите катет b: ";
	std::cin >> b;

	c = sqrt(pow(a, 2) + pow(b, 2));

	if ((a + b > c) && (c > a) && (c > b))
	{
		std::cout << "Гипотенуза = " << c << std::endl;
	}
	else
	{
		std::cout << "Катеты заданы не правильно" << std::endl;
	}
	std::system("pause");
	return 0;
}