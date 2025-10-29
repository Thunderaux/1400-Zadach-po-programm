#include <iostream>
using namespace std;

void sum(int a)
{
	int slog1 = a / 10;
	int slog2 = a % 10;
	cout << slog1 + slog2;
}

int main()
{
	setlocale(LC_ALL, "Russian");
	int n;
	cout << "Введите двухзначное число ";
	cin >> n;
	if ((n < 10) || (n > 99))
		cout << "Введеное число должно быть двухзначным";
	cout << "Сумма цифр двузначного числа равна ";
	sum(n);
}