#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

struct Point {
    double x;
    double y;
};

double distance(Point A, Point B) {
    return sqrt(pow(B.x - A.x, 2) + pow(B.y - A.y, 2));
}

double calculatePerimeter(Point A, Point B, Point C) {
    double sideAB = distance(A, B);
    double sideBC = distance(B, C);
    double sideCA = distance(C, A);

    return sideAB + sideBC + sideCA;
}

double calculateAreaHeron(Point A, Point B, Point C) {
    double sideAB = distance(A, B);
    double sideBC = distance(B, C);
    double sideCA = distance(C, A);

    double p = (sideAB + sideBC + sideCA) / 2.0; 

    return sqrt(p * (p - sideAB) * (p - sideBC) * (p - sideCA));
}


double calculateAreaVector(Point A, Point B, Point C) {
    return abs((B.x - A.x) * (C.y - A.y) - (C.x - A.x) * (B.y - A.y)) / 2.0;
}

int main() {
    setlocale(LC_ALL, "Russian");
    Point A, B, C;

    cout << "Введите координаты вершин треугольника:" << endl;
    cout << "Вершина A (x y): ";
    cin >> A.x >> A.y;
    cout << "Вершина B (x y): ";
    cin >> B.x >> B.y;
    cout << "Вершина C (x y): ";
    cin >> C.x >> C.y;

  
    double sideAB = distance(A, B);
    double sideBC = distance(B, C);
    double sideCA = distance(C, A);

    
    if (sideAB + sideBC <= sideCA ||
        sideBC + sideCA <= sideAB ||
        sideCA + sideAB <= sideBC) {
        cout << "Ошибка: точки не образуют треугольник!" << endl;
        return 1;
    }

    
    double perimeter = calculatePerimeter(A, B, C);
    double areaHeron = calculateAreaHeron(A, B, C);
    double areaVector = calculateAreaVector(A, B, C);

    
    cout << fixed << setprecision(3);
    cout << "\n=== РЕЗУЛЬТАТЫ ===" << endl;
    cout << "Стороны треугольника:" << endl;
    cout << "AB = " << sideAB << endl;
    cout << "BC = " << sideBC << endl;
    cout << "CA = " << sideCA << endl;
    cout << "Периметр: " << perimeter << endl;
    cout << "Площадь (по формуле Герона): " << areaHeron << endl;
    cout << "Площадь (через векторное произведение): " << areaVector << endl;

    return 0;
}



