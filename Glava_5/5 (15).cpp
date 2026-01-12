#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int a, b, c;

	cout << "Введите коэффициент a ";
	cin >> a;

	cout << "Введите коэффициент b ";
	cin >> b;

	cout << "Введите коэффициент c ";
	cin >> c;

	if (a == 0)
	{
		cout << "Ошибка: коэффициент a должен быть не равен нулю! ";
		return 1;
	}

	int D = pow(b, 2) - 4 * a * c;

	if (D > 0)
		cout << "Уравнение имеет два корня";
	else if (D == 0)
		cout << "Уравнение имеет один корень";
	else
		cout << "У уравнения нет действительных корней";
}