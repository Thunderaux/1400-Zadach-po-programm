/* 2.1.	 Составить программу:
а)  вычисления значения функции y = 17x^2
 – 6x + 13 при любом
значении x;   
б)  вычисления значения функции y = 3a^2
 + 5a – 21 при любом
значении а.*/

#include <iostream>
int main()
{
	setlocale(LC_ALL, "Russian");
	int x, a;
	
	std::cout << "Введите значение x: ";
	std::cin >> x;
	
	std::cout << "Введите значение a: ";
	std::cin >> a;

	int y1 = 17 * pow(x, 2) - 6 * x + 13;	
	int y2 = 3 * pow(a, 2) + 5 * a - 21;

	std::cout << "a) Значение функции y = 17x^2 - 6x + 13 при x = " << x << " равно " << y1 << std::endl;
	std::cout << "б) Значение функции y = 3a^2 + 5a - 21 при a = " << a << " равно " << y2 << std::endl;

	std::system("pause");
	return 0;
}