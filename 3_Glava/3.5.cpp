/* Дан прямоугольник с  размерами 543×130 мм. Сколько квадратов со стороной 130 мм можно отрезать от него?*/

#include <iostream>

void separationSquare(int a, int b)
{
	int rectangleSquare = a * b;
	int square = b * b;
	int separation = rectangleSquare / square;
	std::cout << "От прямоугольника 543х130 мм можно отрезать " << separation << " квадратов со стороной 130 мм";
}

int main()
{
	setlocale(LC_ALL, "Russian");
	int rectangleA { 543 };
	int rectangleB { 130 };

	separationSquare(rectangleA, rectangleB);
	return 0;
}