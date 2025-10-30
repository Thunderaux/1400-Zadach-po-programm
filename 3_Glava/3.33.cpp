#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int x;
	cout << "Введите трехначное число x: ";
	cin >> x;

	if ((x < 100) || (x > 999))
	{
		cout << "Диапазон числа от 100 до 999";
		return 1;
	}
	
	int a = x / 100;
	int b = (x % 100) / 10;
	int c = (x % 100) % 10;

	int result = x - c;
	result /= 10;
	result = c * 100 + result;

	cout << "n = " << result;

}