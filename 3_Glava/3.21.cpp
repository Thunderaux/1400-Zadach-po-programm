#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int n;
	cout << "Введите трехзначное число: ";
	cin >> n;
	
	if ((n < 100) || (n > 999))
	{
		cout << "Число должно быть трехзначным (диапазон 100 - 999) ";
		return 1;
	}
	int reverse = 0;
	int a = n;

	while (a != 0)
	{
		reverse = reverse * 10 + a % 10;
		a /= 10;
	}
	cout << "Исходное число: " << n << endl;
	cout << "Перевернутое число: " << reverse << endl;

}