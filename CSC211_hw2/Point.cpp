#include "Point.h"
#include <iostream>
using namespace std;

// prints x and y point
void Point::printPoint() {
    cout << "X: " << x << " Y: " << y << endl;
}

//sets x and y point
void Point::set(int x_point, int y_point) {
    x = x_point;
    y = y_point;
}

int Point::getX() {
    return x;
}

int Point::getY() {
    return y;
}