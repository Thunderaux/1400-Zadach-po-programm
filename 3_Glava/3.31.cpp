#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int n;
	cout << "Введите натуральное число n (n > 999): ";
	cin >> n;

	if (n < 999)
	{
		cout << "Чило должно быть больше 999 ";
		return 1;
	}

	int thousand = (n / 1000) % 10;
	int hundred = (n / 100) % 10;

	cout << "а) Число сотен: " << hundred << endl;
	cout << "б) Число тысяч: " << thousand << endl;
}