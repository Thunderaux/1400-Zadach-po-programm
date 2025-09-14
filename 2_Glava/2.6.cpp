/* R = 6350 км */

#include <iostream>
#include <cmath>

int main()
{
	setlocale(LC_ALL, "Russian");
	int r{ 6350 };
	double h;
	std::cout << "Введите высоту в киллометрах: ";
	std::cin >> h;

	int d = sqrt(2 * r * h);
	std::cout << "Расстояние до горизонта примерно = " << d << " км" << std::endl;

	std::system("pause");
	return 0;
}