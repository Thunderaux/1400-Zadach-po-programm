#include <iostream>
#include <cmath>

int main()
{
	setlocale(LC_ALL, "Russian");
	int a, b;
	std::cout << "Введите два целых числа: ";
	std::cin >> a >> b;
	auto z = (a + b) / 2;
	std::cout << "а) Среднее арифмитическое равно = " << z << std::endl;
	
	int product = a * b;
	if (product < 0)
	{
		std::cout << "б) Невозможно вычислить среднее геометрическое для чисел с разными знаками. ";
	}
	else
	{
		std::cout << "б) Среднее геометрическое равно = " << sqrt(product) << std::endl;
	}

	std::system("pause");
	return 0;
}