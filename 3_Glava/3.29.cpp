// .	 Дано натуральное число n (n > 9). Найти: а)  число единиц в  нем; б)  число десятков в  нем.
//

#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int n;
	cout << "Введите натаральное число (n > 9) ";
	cin >> n;

	if (n < 9)
	{
		cout << "Число должно быть больше 9 ";
		return 1;
	}

	int units = n % 10;
	int tens = (n / 10) % 10;

	cout << "а) Число едениц " << units << endl;
	cout << "б) Число десятков " << tens << endl;
}
