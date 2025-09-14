#include <iostream>

int main()
{
	setlocale(LC_ALL, "Russian");
	double population, density;
	std::cout << "Введите население государства: ";
	std::cin >> population;
	
	double square;
	std::cout << "Введите площадь государства: ";
	std::cin >> square;

	density = population / square;
	std::cout << "Плотность населения = " << density << " чел/км^3";

	std::system("pause");
	return 0;
}