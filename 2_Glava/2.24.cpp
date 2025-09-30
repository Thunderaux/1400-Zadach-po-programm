/* Даны два числа. Найти их сумму, разность, произведение, а также частное от деления первого числа на второе*/

#include <iostream>

int main()
{
	setlocale(LC_ALL, "Russian");
	int a, b;
	std::cout << "Введите два целых числа: ";
	std::cin >> a >> b;

	std::cout << "Сумма = " << a + b << std::endl;
	std::cout << "Разность = " << a - b << std::endl;
	std::cout << "Произведение = " << a * b << std::endl;
	std::cout << "Частное = " << a / b << std::endl;

	std::system("pause");
	return 0;
}