#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

class Quadrilateral {
private:
    struct Point {
        double x, y;
    };

    Point A, B, C, D;

    
    double triangleArea(Point p1, Point p2, Point p3) {
        return abs((p2.x - p1.x) * (p3.y - p1.y) - (p3.x - p1.x) * (p2.y - p1.y)) / 2.0;
    }

public:
    
    Quadrilateral(double x1, double y1, double x2, double y2,
        double x3, double y3, double x4, double y4) {
        A = { x1, y1 };
        B = { x2, y2 };
        C = { x3, y3 };
        D = { x4, y4 };
    }

    
    bool isConvex() {
        
        auto crossProduct = [](Point a, Point b, Point c) {
            return (b.x - a.x) * (c.y - b.y) - (b.y - a.y) * (c.x - b.x);
            };

        double cross1 = crossProduct(A, B, C);
        double cross2 = crossProduct(B, C, D);
        double cross3 = crossProduct(C, D, A);
        double cross4 = crossProduct(D, A, B);

        
        return (cross1 >= 0 && cross2 >= 0 && cross3 >= 0 && cross4 >= 0) ||
            (cross1 <= 0 && cross2 <= 0 && cross3 <= 0 && cross4 <= 0);
    }

    

   
    double areaByDiagonalAC() {
        return triangleArea(A, B, C) + triangleArea(A, C, D);
    }

    
    double areaByDiagonalBD() {
        return triangleArea(A, B, D) + triangleArea(B, C, D);
    }

    
    double areaByTriangulation() {
       
        return areaByDiagonalAC(); // или areaByDiagonalBD()
    }

   
    double getArea() {
        return areaByDiagonalAC();
    }

   
    void printInfo() {
        if (!isConvex()) {
            cout << "Четырехугольник не является выпуклым!" << endl;
            return;
        }

        cout << fixed << setprecision(3);
        cout << "Вершины четырехугольника:" << endl;
        cout << "A(" << A.x << ", " << A.y << ")" << endl;
        cout << "B(" << B.x << ", " << B.y << ")" << endl;
        cout << "C(" << C.x << ", " << C.y << ")" << endl;
        cout << "D(" << D.x << ", " << D.y << ")" << endl;

        double areaAC = areaByDiagonalAC();
        double areaBD = areaByDiagonalBD();

        cout << "\nПлощадь (диагональ AC): " << areaAC << endl;
        cout << "Площадь (диагональ BD): " << areaBD << endl;
        cout << "Площадь треугольника ABC: " << triangleArea(A, B, C) << endl;
        cout << "Площадь треугольника ACD: " << triangleArea(A, C, D) << endl;
        cout << "Площадь треугольника ABD: " << triangleArea(A, B, D) << endl;
        cout << "Площадь треугольника BCD: " << triangleArea(B, C, D) << endl;
        cout << "\nИтоговая площадь четырехугольника: " << getArea() << endl;
    }
};

int main() {
    setlocale(LC_ALL, "Russian");
    double x1, y1, x2, y2, x3, y3, x4, y4;

    cout << "Введите координаты вершин выпуклого четырехугольника:" << endl;
    cout << "Вершина A (x y): ";
    cin >> x1 >> y1;
    cout << "Вершина B (x y): ";
    cin >> x2 >> y2;
    cout << "Вершина C (x y): ";
    cin >> x3 >> y3;
    cout << "Вершина D (x y): ";
    cin >> x4 >> y4;

    Quadrilateral quad(x1, y1, x2, y2, x3, y3, x4, y4);
    quad.printInfo();

    return 0;
}