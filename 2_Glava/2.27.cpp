/*Даны основания и  высота равнобедренной трапеции. Найти периметр трапеции.*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	float a, b, h, c, P;
	
	cout << "Введите основания и высоту равнобедренной трапеции: ";
	cin >> a >> b >> h;
	
	c = sqrt(h * h + ((a - b) / 2) * ((a - b) / 2));
	P = a + b + 2 * c;
	
	cout << "Периметр трапеции: " << P << endl;
	return 0;
}