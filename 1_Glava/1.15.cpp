/* Составить программу вывода на экран в одну строку четырех любых чисел, вводимых с  клавиатуры, с  одним пробелом
между ними. */

#include <iostream>

int main()
{
	setlocale(LC_ALL, "Russian");	
	int a, b, c, d;
	std::cout << "Введите числа: ";
	std::cin >> a >> b >> c >> d;
	std::cout << a << " " << b << " " << c << " " << d << std::endl;
	std::system("pause");
	return 0;	
}