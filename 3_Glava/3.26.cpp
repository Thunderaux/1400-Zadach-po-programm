#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int n;
	cout << "Введите трехзначное число: ";
	cin >> n;

	if ((n < 100) || (n > 999))
	{
		cout << "Число должно быть в диапозоне от 100 до 999 ";
		return 1;
	}

	int a = n / 100;
	int b = (n % 100) / 10;
	int c = (n % 100) % 10;
	srand(time(0));

	cout << "Все перестановки цифр заданного числа: " << endl;

	int count = 0;
	while (count < 6)
	{
		int deg[3] = { a, b, c };

		for (int i = 0; i < 3; i++)
		{
			int j = rand() % 3;
			swap(deg[i], deg[j]);
		}

		int result = deg[0] * 100 + deg[1] * 10 + deg[2];

		if (deg[0] != 0)
		{
			cout << result << endl;
			count++;
		}
	}
}