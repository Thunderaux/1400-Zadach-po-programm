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
		cout << "Вы ввели не трехзначное число";
		return 1;
	}

	int a = n / 100;
	int b = (n % 100) / 10;
	int c = (n % 100) % 10;
	
	cout << "а) Число едениц в n: " << c << endl;
	cout << "б) Число десятков в n: " << b << endl;
	cout << "в) Сума цифр n: " << a + b + c << endl;
	cout << "г) Произведение цифр n: " << a * b * c;

}