#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int n;
	cout << "Введите натуральное число (n > 99) ";
	cin >> n;

	if (n < 99)
	{
		cout << "Число должно быть больше 99 ";
		return 1;
	}

	int tens = (n / 10) % 10;
	cout << "а) Число десятков: " << tens << endl;

	int hundred = (n / 100) % 10;
	cout << "б) Число сотен: " << hundred << endl;
}