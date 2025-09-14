#include <iostream>

int main()
{
	setlocale(LC_ALL, "Russian");
	double a, b;
	
	std::cout << "Введите коэффициент a: ";
	std::cin >> a;

	std::cout << "Введите коэффициент b: ";
	std::cin >> b;

	if (a == 0)
	{
		std::cout << "Коэффициент a не должен равняться 0";
	}
	double x = - b / a;
	std::cout << "Решение линейного уравнения ax + b = 0, x = " << x << std::endl;

	std::system("pause");
	return 0;
}