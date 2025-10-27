/* В  купейном вагоне имеется 9 купе с  четырьмя местами для пассажиров в каждом. Определить номер купе, в котором находится место 
с  заданным номером (нумерация мест сквозная,начинается с 1)*/

#include <iostream>

int ceilDivision(int a, int b)
{
	return (a + b - 1) / b;
}

int main()
{
	setlocale(LC_ALL, "Russian");
	int coupe { 4 }, seat;

	std::cout << "Введите номер места ";
	std::cin >> seat;

	if (ceilDivision(seat, coupe) > 9)
	{
		std::cout << "Нет купе с таким номером места ";
	}
	else
	{
		std::cout << "Номер вашего купе " << ceilDivision(seat, coupe);
	}


}