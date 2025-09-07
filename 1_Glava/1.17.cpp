/* 1.17.Составить программу вывода на экран следующей информации:
а) 2 кг  б) а 1  в) x y
  13 17    19 b     5 y  */

#include <iostream>

int main()
{
	setlocale(LC_ALL, "Russian");
	int a, b, x, y;
	
	std::cout << "Введите значение a: ";
	std::cin >> a;
	
	std::cout << std::endl << "Введите значение b: ";
	std::cin >> b;
	
	std::cout << std::endl << "Введите значение x: ";
	std::cin >> x;	
	
	std::cout << std::endl << "Введите значение y: ";
	std::cin >> y;

	std::cout << std::endl << " а) 2 кг   б) " << a << " 1   в) " << x << " " << y << std::endl;
	std::cout << "   13 17      19 " << b << "      5 " << y << std::endl;
}