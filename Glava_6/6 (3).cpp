#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	float x;

	cout << "Введите x: ";
	cin >> x;

	if (x > 0)
		cout << "y = " << sin(pow(x, 2));
	else
		cout << "y = " << 1 + 2 * pow(sin(x), 2);

	return 0;
}