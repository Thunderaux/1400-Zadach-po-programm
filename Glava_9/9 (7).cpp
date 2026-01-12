#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	float x, k, f;

	cout << "Введите x: ";
	cin >> x;

	if (sin(x) < 0)
		k = pow(x, 2);
	else
		k = std::abs(x);

	if (k < x)
		f = k * x;
	else
		f = k + x;

	cout << "F(x) = " << f;
	return 0;
}