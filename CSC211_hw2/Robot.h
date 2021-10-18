#ifndef Robot_H
#define Robot_H
#include "Point.h"
#include <string>

class Robot {
    private:
        enum orientation_type{north, south, east, west};
        std::string robot_position;
        Point robot;

    public:
    void printRobot();
    void init();
    void setOrientation(orientation_type orientation);
    bool forward();
    void turnCW();
    void turnAntiCW();
    bool eastEnd();
    bool westEnd();
    bool northEnd();
    bool southEnd();
    bool zag();
    bool zig();
    int robotGetX();
    int robotGetY();


};

#endif

