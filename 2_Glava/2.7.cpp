#include <iostream>
#include <cmath>

int main()
{
	setlocale(LC_ALL, "Russian");
	int a;
	std::cout << "Введите длину ребра куба: ";
	std::cin >> a;
	
	std::cout << "Объем куба: " << pow(a, 3) << std::endl;
	std::cout << "Площадь поверхности куба: " << 6 * a * a << std::endl;

	std::system("pause");
	return 0;
}