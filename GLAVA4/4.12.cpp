#include <iostream>
#include <cmath>
using namespace std;

const double PI = 3.14159;

int main()
{
	setlocale(LC_ALL, "Russian");
	double Rcircle, Asquare;
	
	cout << "Введите радиус круга: ";
	cin >> Rcircle;

	cout << "Введите сторону квадрата: ";
	cin >> Asquare;

	double CircleSquare = PI * pow(Rcircle, 2);
	double Square = pow(Asquare, 2);

	if (CircleSquare > Square)
		cout << "Площадь круга больше площади квадрата " << endl;
	else
		cout << "Площадь квадрата больше площади круга " << endl;

	return 0;
}
