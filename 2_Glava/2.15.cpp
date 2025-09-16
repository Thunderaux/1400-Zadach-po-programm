#include <iostream>
#include <cmath>

int main()
{
	setlocale(LC_ALL, "Russian");
	double R, r;
	double const pi{ 3.14 };
	
	std::cout << "Введите внешний радиус кольца R: ";
	std::cin >> R;

	std::cout << "Введите внутрений радиус кольца r: ";
	std::cin >> r;

	double square = pi * (pow(R, 2) - pow(r, 2));
	std::cout << "Площадь кольца при R = " << R << " и при r = " << r << " составляет " << square << std::endl;

	std::system("pause");
	return 0;
}