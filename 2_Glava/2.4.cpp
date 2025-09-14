#include <iostream>

int main()
{
	setlocale(LC_ALL, "Russian");	
	int a;
	std::cout << "Введите длину стороны квадрата: ";
	std::cin >> a;
	int perimeter = 4 * a;
	std::cout << "Периметр квадрата = " << perimeter << std::endl;
	std::system("pause");
	return 0;
}