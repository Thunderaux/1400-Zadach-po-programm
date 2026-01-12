#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	float a, b;
	
	cout << "Введите число a: ";
	cin >> a;

	cout << "Введите число b: ";
	cin >> b;

	if (a > b)
		cout << "a) Большее число: " << a << endl << "б) Меньшее число: " << b << endl;
	else
		cout << "a) Большее число: " << b << endl << "б) Меньшее число: " << a << endl;

	return 0;
}