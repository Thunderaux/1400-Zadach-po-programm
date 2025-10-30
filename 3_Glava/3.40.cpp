#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int n = 654;

    int c = n / 100;
    int ba = n % 100;
    int b = ba / 10;
    int a = ba % 10;

    int x = 100 * a + 10 * b + c;

    cout << "Исходное число x: " << x << endl;

    return 0;
}