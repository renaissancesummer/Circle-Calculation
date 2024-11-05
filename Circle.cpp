#include <iostream>
#include <math.h>
using namespace std;

double pi = 3.1416;

double distance(double x1, double y1, double x2, double y2){
    return pow((pow(x2 - x1, 2) + pow(y2 - y1, 2)), 0.5);
}

double radius(double x1, double y1, double x2, double y2){
    return pow((pow(x2 - x1, 2) + pow(y2 - y1, 2)), 0.5) / 2;
}

double circumference(double x1, double y1, double x2, double y2){
    return pi * pow((pow(x2 - x1, 2) + pow(y2 - y1, 2)), 0.5);
}

double area(double x1, double y1, double x2, double y2){
    double radius = pow((pow(x2 - x1, 2) + pow(y2 - y1, 2)), 0.5) / 2;
    return pi * pow(radius, 2);
}

int main(){
    system("cls");
    cout << "==CIRCLE CALCULATION==" << endl << "Input your cartesian dots (x1, y1) and (x2, y2)" << endl << endl;
    double x1, y1, x2, y2;
    cout << "x1 = ";
    cin >> x1;
    cout << "y1 = ";
    cin >> y1;
    cout << "x2 = ";
    cin >> x2;
    cout << "y2 = ";
    cin >> y2;
    cout << endl << "Distance\t= " << distance(x1, y1, x2, y2);
    cout << endl << "Radius\t\t= " << radius(x1, y1, x2, y2);
    cout << endl << "Circumference\t= " << circumference(x1, y1, x2, y2);
    cout << endl << "Area\t\t= " << area(x1, y1, x2, y2);
}
