#include <iostream>
#include <cmath>
int main()
{
	setlocale(LC_ALL, "Russian");
	double V, m, p;
	
	std::cout << "Введите объём тела: ";
	std::cin >> V;

	std::cout << "Введите массу тела: ";
	std::cin >> m;

	p = m / V;
	std::cout << "Плотность материала этого тела = " << p << std::endl;

	std::system("pause");
	return 0;
}