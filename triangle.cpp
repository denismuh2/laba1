#include <iostream>
#include "math.h"
#include <cmath>
using namespace std;

// проверка на существование треугольника
bool isTriangle(double a, double b, double c) {
    return (a+b>c) && (a+c>b) && (b+c>a);
}

// проверка на равнобедренность
bool isTriangleRB(double a, double b, double c) {
    return (a==b) || (a==c) || (b==c);
}

// нахождение периметра
double perimeter(double a, double b, double c) {
    return a+b+c;
}

// нахождение площади по формуле Герона
double space(double a, double b, double c) {
    double pp = (a+b+c)/2; // полупериметр
    return sqrt(pp * (pp-a) * (pp-b) * (pp-c));
}

int main() {
    
    double a, b, c;

    cout << "Введите стороны треугольника: ";
    cin >> a >> b >> c;

    // проверка что введены числа и они >0:
    if (!cin || a<=0 || b<=0 || c<=0) {
        cout << "Введены неверные значения сторон\n";
        return 1;
    }

    // проверка на существование треугольника
    if (!isTriangle(a,b,c)) {
        cout << "Треугольник с такими сторонами не существует\n";
    return 1;
    }

    cout << "Периметр треугольника: " << perimeter(a,b,c) << "\n";
    cout << "Площадь треугольника: " << space(a,b,c) << "\n";

    if (isTriangleRB(a,b,c)) {
        cout << "Треугольник равнобедренный\n";
    } else {
        cout << "Треугольник не равнобедренный\n";
    }
    return 0;
}
