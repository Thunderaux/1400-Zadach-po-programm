/* 1.8 Составить программу вывода на экран числа, вводимого
с  клавиатуры. Выводимому числу должно предшествовать сообщение «Вы ввели число».*/

#include <iostream>

int main()
{
	setlocale(LC_ALL, "Russian");	
	int number;
	std::cout << "Введите число -> ";
	std::cin >> number;
	std::cout << " Вы ввели число " << number << std::endl;
	std::system("pause");
	return 0;
}