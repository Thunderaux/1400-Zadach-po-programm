#include <iostream>
#include <cmath>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	setlocale(LC_ALL, "Russian");
	double x, y, a, b;

	cout << "Введите значение a: ";
	cin >> a;

	cout << "Введите значение b: ";
	cin >> b;

	x = (((2 / (pow(a, 2) + 25)) + b) / ((sqrt(b) + ((a + b) / 2))));
	y = ((std::abs(a) + 2 * sin(b)) / (5.5 * a));

	cout << "Значение функции x при a = " << a << " и при b = " << b << "равно " << x << endl;
	cout << "Значение функции y при a = " << a << " и при b = " << b << "равно " << y << endl;

	std::system("pause");
	return 0;
}