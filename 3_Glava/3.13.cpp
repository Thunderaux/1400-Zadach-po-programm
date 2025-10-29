#include <iostream>
using namespace std;


int main()
{
	setlocale(LC_ALL, "Russian");
	int rows {10}, columns {5}, n, column, row;
	cout << "Введите порядковый номер ";
	cin >> n;
	column = (n - 1) % columns;
	row = (n - 1) / columns;
	cout << "1) n = " << n << " находится в " << row << " строке" << endl << "2) n = " << n << " находся в " << column << " столбце";
}