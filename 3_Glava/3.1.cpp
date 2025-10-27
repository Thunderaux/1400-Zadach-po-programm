#include <iostream>

int main()
{
	setlocale(LC_ALL, "Russian");
	int input;
	
	std::cout << "Введите расстояние в сантиметрах ";
	std::cin >> input;
	
	int metr = input / 100;
	std::cout << "Число полных метров = " << metr << std::endl;

	std::system("pause");
	return 0;
}