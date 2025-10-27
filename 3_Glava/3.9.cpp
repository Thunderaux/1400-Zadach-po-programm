#include <iostream>


int main()
{
	setlocale(LC_ALL, "Russian");
	int n;
	
	std::cout << "Введите сколько секунд прошедних с начала суток ";
	std::cin >> n;
	
	int a = n / 3600;
	std::cout << "a) С начала суток прошло " << a << " часа(ов)" << std::endl;

	int b = (n % 3600) / 60;
	std::cout << "б) С начала очередного часа прошло " << b << " минут(ы)" << std::endl;

	int c = (n % 3600) % 60;
	std::cout << "в) С начала очередной минуты прошло " << c << " секунд(ы)";

	return 0;
}