/* Даны основания равнобедренной трапеции и  угол при большем основании. Найти площадь трапеции.*/

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");	
	double a, b, alpha, h, S;
	double pi = 3.14159265358979323846;

	cout << "Введите основания трапеции (a - большее, b - меньшее): ";
	cin >> a >> b;
	if(a <= b) {
		cout << "Ошибка: большее основание должно быть больше меньшего." << endl;
		return 1;
	}
	
	cout << "Введите угол при большем основании (в градусах): ";
	cin >> alpha;
	if(alpha <= 0 || alpha >= 90) {
		cout << "Ошибка: угол должен быть в диапазоне (0, 90) градусов." << endl;
		return 1;
	}
	
	alpha = alpha * pi / 180;
	h = (a - b) * tan(alpha) / 2;
	S = (a + b) * h / 2;

	cout << "Площадь трапеции: " << S << endl;
	return 0;
}