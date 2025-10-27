/*	 В  подъезде № 1 пятиэтажного жилого дома 15 квартир. Определить, на каком этаже этого подъезда находится квартира с  заданным номером.*/

#include <iostream>

int house(int i, int n)
{
	return (i + n - 1) / n;
}

int main()
{
	setlocale(LC_ALL, "Russian");
	int floor { 3 }, flat;

	std::cout << "Введите номер квартиры ";
	std::cin >> flat;

	if (house(flat, floor) > 5)
		std::cout << "В этом подъезде нет квартиры с данным номером ";
	else
		std::cout << "Квартира находиться на " << house(flat, floor) << " этаже";

	return 0;
}