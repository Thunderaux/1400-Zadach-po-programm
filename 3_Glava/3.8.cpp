#include <iostream>

void row(int seat, int place)
{
	std::cout << ((place + seat - 1) / seat);
}

int main()
{
	setlocale(LC_ALL, "Russian");
	int t1{ 1643 }, seat{ 15 }, place;
	
	std::cout << "Введите номер вашего билета ";
	std::cin >> place;
	
	if (place < t1 && place > 1943)
		std::cout << "Номер билета введен не правльно ";
	
	int ticket = place - t1;
	
	std::cout << "Ваш билет AB0" << place << " номер вашего ряда ";
	row(seat, ticket);
	return 0;
}