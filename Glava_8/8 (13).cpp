#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	double v1, v2, m1, m2;

	cout << "Введите объём первого материала: ";
	cin >> v1;

	cout << "Введите массу первого материала: ";
	cin >> m1;

	cout << "Введите объём второго материала: ";
	cin >> v2;

	cout << "Введите массу второго материала: ";
	cin >> m2;

	double p1 = m1 / v1;
	double p2 = m2 / v2;

	if (p1 > p2)
		cout << "Первый материал имеет большую плотность ";
	else if (p1 < p2)
		cout << "Второй материал имеет большую плотность ";
	else
		cout << "Материалы имеют одинаковую плотность ";
}