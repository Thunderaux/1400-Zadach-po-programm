#include <iostream>
#include <cmath>

int main()
{
	setlocale(LC_ALL, "Russian");
	int a, b, h, c, d, P;

	std::cout << "Введите большее основание трапеции a: ";
	std::cin >> a;

	std::cout << "Введите меньшее основание трапеции b: ";
	std::cin >> b;

	std::cout << "Введите высоту трапеции h: ";
	std::cin >> h;

	if (a < b)
		std::cout << "Неправильно заданы основания трапеции" << std::endl;

	c = a - b;
	d = sqrt(pow(c, 2) + pow(h, 2));

	P = a + b + 2 * d;
	std::cout << "Периметр трапеции равен " << P << std::endl;
	std::system("pause");
	return 0;
}