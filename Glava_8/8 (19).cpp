#include <iostream>
#include <cmath>
using namespace std;

#define PI 3.1415926535

int main()
{
	setlocale(LC_ALL, "Russian");
	double SquareCirkle, SquareTriengle;

	cout << "Введите площадь круга ";
	cin >> SquareCirkle;

	cout << "Введите площадь треугольника ";
	cin >> SquareTriengle;

	bool cirkle = SquareCirkle <= (PI / (3 * sqrt(3))) * SquareTriengle;
	bool triengle = SquareCirkle >= (4 * PI / (3 * sqrt(3))) * SquareTriengle;

	cout << "а) Круг " << (cirkle ? "уместится" : "не уместится") << " в треугольнике" << endl;
	cout << "б) Треугольник " << (triengle ? "уместится" : "не уместится") << " в круге" << endl;
}
