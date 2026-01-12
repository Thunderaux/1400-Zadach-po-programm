#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int y;
	cout << "Введите y: ";
	cin >> y;

	if (y < 3)
		cout << "Точка попадает во II область";
	else
		cout << "Точка попадает в I область";

	return 0;
}
