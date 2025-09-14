#include <iostream>

int main() 
{
	setlocale(LC_ALL, "Russian");	
	int R;
	std::cout << "Введите радиус окружности: ";
	std::cin >> R;

	std::cout << "Длина окружности при радиусе " << R << " равна " << 2 * 3.14 * R << std::endl;
	std::cout << "Площадь окружности при радиусе " << R << " равна " << 3.14 * pow(R, 2) << std::endl;

	std::system("pause");
	return 0;
}