#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int k, n, d;

	cout << "Введите номер дня года ";
	cin >> k;

	if (k < 1 || k > 365)
		cout << "Номер дня года введен не правильно( диапозон 1 - 365 )";

	n = (k - 1) % 7;
	cout << "a) 1 Января - понедельник: ";
	switch (n)
	{
	case 0: cout << "Воскресенье " << endl;
		break;
	case 1: cout << "Понедельник " << endl;
		break;
	case 2: cout << "Вторник " << endl;
		break;
	case 3: cout << "Среда " << endl;
		break;
	case 4: cout << "Четверг " << endl;
		break;
	case 5: cout << "Пятница " << endl;
		break;
	case 6: cout << "Суббота " << endl;
		break;
	}

	n = n % 7;
	cout << "б) 1 Января - вторник: ";
	switch (n)
	{
	case 0: cout << "Воскресенье " << endl;
		break;
	case 1: cout << "Понедельник " << endl;
		break;
	case 2: cout << "Вторник " << endl;
		break;
	case 3: cout << "Среда " << endl;
		break;
	case 4: cout << "Четверг " << endl;
		break;
	case 5: cout << "Пятница " << endl;
		break;
	case 6: cout << "Суббота " << endl;
		break;
	}

	cout << "Введите день недели ";
	cin >> d;
	if (d < 1 || d > 7)
		cout << "День недели задан не правильно ( диапазон 1 - 7) ";

	n = (n + d - 2) % 7;
	cout << "в) 1 января " << d << "-й день недели: ";
	switch (n)
	{
	case 0: cout << "Воскресенье " << endl;
		break;
	case 1: cout << "Понедельник " << endl;
		break;
	case 2: cout << "Вторник " << endl;
		break;
	case 3: cout << "Среда " << endl;
		break;
	case 4: cout << "Четверг " << endl;
		break;
	case 5: cout << "Пятница " << endl;
		break;
	case 6: cout << "Суббота " << endl;
		break;
	}
	
	return 0;
}
	