/* 1.10. Составить программу, которая запрашивает имя человека
и  повторяет его на экране. */

#include <iostream>
#include <string>
#include <windows.h>


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	std::string name;
	std::cout << "Введите имя: ";
	std::getline(std::cin, name);
	std::cout << "Ваше имя: " << name << std::endl;
	std::system("pause");
	return 0;
}