#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	float a, b;

	cout << "Введите значение а и b: ";
	cin >> a >> b;

	float midArith = ((std::abs(a + b)) / 2);
	float midGeom = sqrt(std::abs(a * b));	

	cout << "Среднее арифметическое модулей a и b = " << midArith << endl;
	cout << "Среднее геометрическое модулей a и b = " << midGeom << endl;

	std::system("pause");
	return 0;
}