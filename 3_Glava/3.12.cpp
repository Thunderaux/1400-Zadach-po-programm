#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int floor, flat;
	
	cout << "Введите номер квартиры ";
	cin >> flat;
	
	floor = (flat + 3) / 4;
	
	cout << "а) Ваша квартира";
	switch (floor)
	{
	case 1: cout << " на 1 этаже" << endl; break;
	case 2: cout << " на 2 этаже" << endl; break;
	case 3: cout << " на 3 этаже" << endl; break;
	case 4: cout << " на 4 этаже" << endl; break;
	case 5: cout << " на 5 этаже" << endl; break;
	default: cout << " не в этом подъезде " << endl; break;
	}

	int flatOnfloor = flat % 4;
	cout << "б) Ваша квартира ";
	switch (flatOnfloor)
	{
	case 1: cout << "1 по счету на этаже" << endl; break;
	case 2: cout << "2 по счету на этаже" << endl; break;
	case 3: cout << "3 по счету на этаже" << endl; break;
	case 0: cout << "4 по счету на этаже" << endl; break;
	}

}
