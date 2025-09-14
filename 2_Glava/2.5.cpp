#include <iostream>

int main()
{
	setlocale(LC_ALL, "Russian");
	int r;
	std::cout << "Введите радиус окружности: ";
	std::cin >> r;	
	std::cout << "Диаметр окружности равен = " << 2 * r << std::endl;
	std::system("pause");
	return 0;
}