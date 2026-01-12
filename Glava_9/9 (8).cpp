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
		k = std::abs(x);
	else
		k = pow(x, 2);

	if (x < k)
		f = std::abs(x);
	else
		f = k * x;

	cout << "F(x) = " << f;
	return 0;
}
