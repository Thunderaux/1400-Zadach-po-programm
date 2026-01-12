#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int x;
	cout << "Введите x: ";
	cin >> x;
	cout << "a) y = " << x << endl;
	cout << "б) y = " << -x << endl;
	return 0;
}