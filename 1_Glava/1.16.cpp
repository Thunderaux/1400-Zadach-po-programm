/* 1.16.	 Составить программу вывода на экран следующей информации:
а) 5 10 б) 100 t в) x 25
   7 см    1949 v   x y */
#include <iostream>

int main()
{
	setlocale(LC_ALL, "Russian");
	int t, v, x, y;

	std::cout << "Введите значение t: ";
	std::cin >> t;

	std::cout << std::endl << "Введите значение v: ";
	std::cin >> v;

	std::cout << std::endl << "Введите значение x: ";
	std::cin >> x;

	std::cout << std::endl << "Введите значение y: ";
	std::cin >> y;

	std::cout << std::endl << "а) 5 10    б) 100 " << t << "    в) " << x << " 25" << std::endl;
	std::cout << "   7 см      1949 " << v << "       " << x << " " << y << std::endl;

}