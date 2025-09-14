#include <iostream>
#include <math.h>

int main()
{
	setlocale(LC_ALL, "Russian");	
	int a;
	std::cout << "Введите значение а: ";
	std::cin >> a;	
	auto y = (pow(a, 2) + 10) / (sqrt(pow(a, 2) + 1));
	std::cout << "Значение выражения:  a^2 + 10/sqrt(a^2 + 1) при a = " << a << " равно " << y << std::endl;	
	std::system("pause");
	return 0;	
}
