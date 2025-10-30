#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int n;
	cout << "Введите четырехзначное число: ";
	cin >> n;

	if ((n < 1000) || (n > 9999))
	{
		cout << "Число дожно быть в диапозоне от 1000 до 9999 ";
		return 1;
	}

	int a = n / 1000;
	int b = (n % 1000) / 100;
	int c = ((n % 1000) % 100) / 10;
	int d = ((n % 1000) % 100) % 10;
	
	cout << "а) " << n << endl;
	cout << "б) " << b * 1000 + a * 100 + d * 10 + c << endl;
	cout << "в) " << a * 1000 + c * 100 + b * 10 + d << endl;
	cout << "г) " << c * 1000 + d * 100 + a * 10 + b << endl;
}
