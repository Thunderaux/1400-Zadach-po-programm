/* Составить программу, которая запрашивает название
футбольной команды и  повторяет его на экране со словами «–
это чемпион!». */

#include <iostream>
#include <string>	
#include <Windows.h>

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	std::string team;
	std::cout << "Введите название футбольной команды: ";
	std::getline(std::cin, team);
	std::cout << team << "- это чемпион!" << std::endl;
	std::system("pause");
	return 0;
}
