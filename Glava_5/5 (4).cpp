#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int x;
	cout << "Введите x: ";
	cin >> x;
	
	if (x > 4)
		cout << "Точка попадает во II область";
	else
		cout << "Точка попадает в I область";

	return 0;
}