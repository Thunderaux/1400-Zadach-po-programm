#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int n;
	cout << "Введите трехзначное число: ";
	cin >> n;

	if ((n < 100) || (n > 999))
		cout << "Вы ввели не трехзначное число";

	int a = n / 100;
	int b = (n % 100) / 10;
	int c = ((n % 100) % 10);
	cout << a  << ", " << b << ", " << c;
}