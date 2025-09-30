#include <iostream>
using namespace std;	

int main()
{
	setlocale(LC_ALL, "Russian");
	int a, b, c, d;

	cout << "Введите стороны прямоугольника a, b, с и d : ";
	cin >> a >> b >> c >> d;
	
	int P = a + b + c + d;
	float diag = sqrt(pow(a, 2) + pow(b, 2));	

	cout << "Периметр прямоугольника P = " << P << endl;
	cout << "Диагональ прямоугольника diag = " << diag << endl;

	std::system("pause");
	return 0;
}