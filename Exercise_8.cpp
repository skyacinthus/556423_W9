#include <iostream>
#include <string>
#include <cmath>
using namespace std;
double distance(int centerX, int centerY, int X, int Y);
double radius(int centerX, int centerY, int X, int Y);
double circumference(double r);
double area(double r);

int main() {
    int centerX, centerY, X, Y;
    double r, d, c, a;
    cout << "ENTER THE CENTER\n" << "enter X: ";
    cin >> centerX;
    cout << "enter Y: ";
    cin >> centerY;
    cout << "ENTER THE POINT\n" << "enter X: ";
    cin >> X;
    cout << "enter Y: ";
    cin >> Y;
    cout << endl;

    r = radius(centerX, centerY, X, Y);
    d = 2*r;
    c = circumference(r);
    a = area(r);

    cout << "RADIUS: " << r << endl;
    cout << "DIAMETER: " << d << endl;
    cout << "CIRCUMFERENCE: " << c << endl;
    cout << "AREA: " << a << endl;
    return 0;
}

double distance(int centerX, int centerY, int X, int Y) {
    return (float) sqrt(pow((X - centerX), 2) + pow((Y - centerY), 2));
}

double radius(int centerX, int centerY, int X, int Y) {
    return distance(centerX, centerY, X, Y);
}

double circumference(double r){
    return 2 * 3.1416 * r;
}

double area(double r){
    return 3.1416 * r * r;
}