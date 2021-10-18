#ifndef Point_H
#define Point_H

class Point {
    private:
    int x;
    int y;

    public:
    void printPoint();
    void set(int x_point, int y_point);
    int getX();
    int getY();

};

#endif