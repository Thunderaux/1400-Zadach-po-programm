#include <iostream>

const int day { 7 };
int days {234};

void week(int a, const int b)
{
	int week = a / b;
	std::cout << "Полных недель " << week;
}
int main()
{
	setlocale(LC_ALL, "Russian");
	week(days, day);
}