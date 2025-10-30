#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int n, m;
	cout << "Введите четырехзначное число: ";
	cin >> n;

	if ((n < 1000) || (n > 9999))
	{
		cout << "Число должно быть в диапозоне от 1000 до 9999";
		return 1;
	}

	int sumN = 0;
	int tempN = n;

	while (tempN != 0)
	{
		sumN += tempN % 10;
		tempN /= 10;
	}
	
	cout << "Сумма цифр " << n << " = " << sumN << endl;


	cout << "Введите пятизначное число: ";
	cin >> m;

	if ((m < 10000) || (m > 99999))
	{
		cout << "Число должно быть в диапазоне от 100000 до 99999";
		return 1;
	}

	int sumM = 0;
	int tempM = m;

	while (tempM != 0)
	{
		sumM += tempM % 10;
		tempM /= 10;
	}

	cout << "Сумма цифр " << m << " = " << sumM;
}