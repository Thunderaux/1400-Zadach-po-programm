#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int result { 564 };

	int a = result % 10;
	int bc = (result / 10);
	
	int b = bc / 10;
	int c = bc % 10;

	cout << "x = " << a * 100 + b * 10 + c;
}