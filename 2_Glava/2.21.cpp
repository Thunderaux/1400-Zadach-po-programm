#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	double e, f, g, h;

	cout << "Введите значение e: ";
	cin >> e;

	cout << "Введите значение f: ";
	cin >> f;

	cout << "Введите значение g: ";
	cin >> g;

	cout << "Введите значение h: ";
	cin >> h;

	double a = (e + (f / 2)) / 3;
	double b = std::abs(pow(h, 2) - g);
	double c = sqrt(pow((g - h), 2) - (3 * sin(e)));

	cout << " Значение функции a = " << a << endl;
	cout << " Значение функции b = " << b << endl;
	cout << " Значение функции c = " << c << endl;

	std::system("pause");
	return 0;
}