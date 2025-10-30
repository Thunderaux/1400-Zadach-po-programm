#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int result{ 237 };

	int c = result / 100;
	int ab = result % 100;
	int a = ab / 10;
	int b = ab % 10;

	cout << "x = " << a * 100 + b * 10 + c;
}