#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int result = 456;

    int a = result / 100;        
    int cb = result % 100;       

    int c = cb / 10;           
    int b = cb % 10;             

    int x = 100 * a + 10 * b + c;

    cout << "Исходное число x: " << x << endl;
    return 0;
}
