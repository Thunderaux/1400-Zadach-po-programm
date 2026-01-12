#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    double Square, SquareCircle;

    cout << "Введите площадь квадрата: ";
    cin >> Square;

    cout << "Введите площадь круга: ";
    cin >> SquareCircle;

   
    double a = sqrt(Square);
    double R = sqrt(SquareCircle / 3.14);

    bool circleInSquare = (2 * R <= a);           
    bool squareInCircle = (a * sqrt(2) <= 2 * R); 

    cout << "а) Круг " << (circleInSquare ? "уместится" : "не уместится")
        << " в квадрате" << endl;
    cout << "б) Квадрат " << (squareInCircle ? "уместится" : "не уместится")
        << " в круге" << endl;

    return 0;
}