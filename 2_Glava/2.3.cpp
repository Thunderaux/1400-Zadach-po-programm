#include <iostream>
#include <cmath>

int main()
{
	setlocale(LC_ALL, "Russian");	
	int a, x;
	
	std::cout << "Введите значение a: ";
	std::cin >> a;

	std::cout << "Введите значение x: ";	
	std::cin >> x;

	auto y1 = sqrt((2 * a + sin(std::abs(3 * a))) / 3.56);
	auto y2 = sin((3.2 + sqrt(1 + x)) / std::abs(5 * x));
	
	std::cout << "Значение функции sqrt((2 * a + sin(|3 * a|)) / 3.56) при a = " << a << " равно " << y1 << std::endl;
	std::cout << "Значение функции sin((3.2 + sqrt(1 + x)) / |5 * x|) при x = " << x << " равно " << y2 << std::endl;

	std::system("pause");
	return 0;
}