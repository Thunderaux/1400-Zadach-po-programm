/* Составить программу вывода на экран в одну строку трех
любых чисел, вводимых с клавиатуры, с двумя пробелами между
ними. */

#include <iostream>

int main()
{
	setlocale(LC_ALL, "Russian");
	int a, b, c;
	std::cout << "Введите три числа: ";
	std::cin >> a >> b >> c;
	std::cout << a << "  " << b << "  " << c << std::endl;
	return 0;	
}