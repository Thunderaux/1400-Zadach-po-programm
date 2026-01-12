#include <iostream>
using namespace std;

int months{ 11 };
int years{ 2025 };

int main()
{
	setlocale(LC_ALL, "Russian");
	int year, month;
	
	cout << "Введите месяц и год рождения: ";
	cin >> month >> year;
	
	if (year < 1000 || year > years || month < 1 || month >> 12)
		cout << "Год введён не коректно";

	int old = years - year;

	if (month > months)
		old -= 1;

	cout << "Возраст: " << old << " полных лет";

}