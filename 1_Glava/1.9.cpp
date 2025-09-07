/* 1.9.	 Составить программу вывода на экран числа, вводимого
с клавиатуры. После выводимого числа должно следовать сообщение «– вот какое число Вы ввели». */

#include <iostream>

int main()
{
	setlocale(LC_ALL, "Russian");
	int number;
	std::cout << "Введите число -> ";
	std::cin >> number;
	std::cout << number << "- вот такое число вы ввели" << std::endl;
	std::system("pause");
	return 0;
}