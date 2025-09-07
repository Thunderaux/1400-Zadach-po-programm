/* Напишите программу, в которую вводится имя человека
и выводится на экран приветствие в виде слова «Привет», после
которого должна стоять запятая, введенное имя и восклицательный знак. 
После запятой должен стоять пробел, а  перед восклицательным знаком пробела быть не должно.*/

#include <iostream>
#include <string>
#include <Windows.h>

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	std::string name;
	std::cout << "Введите имя: ";
	std::cin >> name;
	std::cout << "Привет, " << name << "!" << std::endl;
	std::system("pause");
	return 0;	
}