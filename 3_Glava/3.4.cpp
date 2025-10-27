/*Написать программу, которая решает следующую задачу: «N школьников делят k яблок поровну так, чтобы каждому достались 
только целые яблоки, остальные яблоки остаются в  корзинке. Определить, сколько яблок достанется каждому школьнику
и  сколько яблок останется в корзинке».*/

#include <iostream>

void shareApple(int n, int k)
{
	int share = k / n;
	int backet = k % n;
	std::cout << "Каждому школьнику досталось по " << share << ". В корзине осталось " << backet << std::endl;
}

int main()
{
	setlocale(LC_ALL, "Russian");
	int apple, schoolboy;
	
	std::cout << "Введите количество школьников ";
	std::cin >> schoolboy;

	std::cout << "Введите количество яблок ";
	std::cin >> apple;

	shareApple(schoolboy, apple);
	return 0;
}