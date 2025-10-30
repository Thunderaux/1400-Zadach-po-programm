#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int result = 546;

    int b = result / 100;        
    int ac = result % 100;       

    int a = ac / 10;             
    int c = ac % 10;             

   
    int x = 100 * a + 10 * b + c;

    cout << "Исходное число x: " << x << endl;
    return 0;
}