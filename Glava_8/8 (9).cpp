#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	float x, y;

	cout << "Введите x: ";
	cin >> x;

	cout << "Введите y: ";
	cin >> y;

	if (x > y)
		cout << "Максимальное: " << x << endl << "Минимальное: " << y;
	else
		cout << "Максимальное: " << y << endl << "Минимальное: " << x;

	return 0;
}