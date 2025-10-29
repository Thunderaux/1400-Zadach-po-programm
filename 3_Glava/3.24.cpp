#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int n;
	cout << "Введите трехзначное число ";
	cin >> n;

	if ((n < 100) || (n > 999))
	{
		cout << "число должно быть в диапозоне от 100 до 999";
		return 1;
	}

	int a = n / 100;
	int b = (n % 100) / 10;
	int c = (n % 100) % 10;

	cout << "Исходное число: " << n << endl;
	cout << "Измененное число: " << b * 100 + a * 10 + c;
}