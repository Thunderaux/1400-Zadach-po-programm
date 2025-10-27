#include <iostream>

int main()
{
	setlocale(LC_ALL, "Russian");
	int input;

	std::cout << "Введите массу в киллограмах ";
	std::cin >> input;

	int cent = input / 100;
	std::cout << "Число полных центнеров = " << cent << std::endl;

	std::system("pause");
	return 0;
}