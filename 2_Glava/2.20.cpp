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

	double a = sqrt(pow(std::abs(e - (3 / f)), 3) + g);
	double b = sin(e) + pow(cos(h), 2);
	double c = (33 * g) / (e * f - 3);

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;
	
	std::system("pause");
	return 0;
}