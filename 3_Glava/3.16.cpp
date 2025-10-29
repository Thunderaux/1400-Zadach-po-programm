#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int n;
	cout << "Введите двузначное число n: ";
	cin >> n;
	if ((n < 10) || (n > 99))
		cout << "Вводите только двухзначные числа";
	int dozens = n / 10;
	cout << "a)Число десятков в n: " << dozens << endl;
	int units = n % 10;
	cout << "б)Число едениц в n: " << units;
}