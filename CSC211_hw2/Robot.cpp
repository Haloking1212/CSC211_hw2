#include "Robot.h"
#include <iostream>
using namespace std;

// initalizes robot to point (0,0) and east orentation
void Robot::init() {
    robot.set(0,0);
    robot_position = "east";
}

// prints robot current position
void Robot::printRobot() {
    cout << "Robot on: " << robot.getX() << ", " << robot.getY() << endl;
    cout << "Robot facing: " << robot_position << endl;
}

// sets the robot position
void Robot::setOrientation(orientation_type orientation) {
    switch (orientation)
    {
    case north:
        robot_position = "north";
        break;
    case south:
        robot_position = "south";
        break;
    case east:
        robot_position = "east";
        break;
    case west:
        robot_position = "west";
        break;
    
    default:
        break;
    }
}

// moves the robot forward
bool Robot::forward() {
    int x = robot.getX();
    int y = robot.getY();

    if(robot_position == "east" && x <= 9 && x >= 0) {
        robot.set(x + 1, y);
        return true;
    } else if (robot_position == "north" && y <= 9 && y >= 0) {
        robot.set(x, y + 1);
        return true;
    } else if (robot_position == "west" && x <= 9 && x >= 0) {
        robot.set(x - 1, y);
        return true;
    } else if (robot_position == "south" && y <= 9 && y >= 0) {
        robot.set(x, y - 1);
        return true;
    } else {
        return false;
    }
}

// turns the robot clockwise
void Robot::turnCW() {
    if(robot_position == "north") {
        robot_position = "east";
    } else if (robot_position == "east") {
        robot_position = "west";
    } else if (robot_position == "west") {
        robot_position = "north";
    } else if (robot_position == "north") {
        robot_position = "east";
    }
}

// turns the robot anti clockwise
void Robot::turnAntiCW() {
    if(robot_position == "north") {
        robot_position = "west";
    } else if (robot_position == "west") {
        robot_position = "south";
    } else if (robot_position == "south") {
        robot_position = "east";
    } else if (robot_position == "east") {
        robot_position = "north";
    }
}

bool Robot::eastEnd() {
    int x = robot.getX();
    if(x == 9) {
        return true;
    } else {
        return false;
    }
}

bool Robot::westEnd() {
    int x = robot.getX();
    if(x == 0) {
        return true;
    } else {
        return false;
    }
}

bool Robot::northEnd() {
    int y = robot.getY();

    if(y == 9) {
        return true;
    } else {
        return false;
    }
}

bool Robot::southEnd() {
    int y = robot.getY();
    if(y == 0) {
        return true;
    } else {
        return false;
    }
}

// causes the robot to zag clockwise
bool Robot::zag() {
    int x = robot.getX();
    int y = robot.getY();

    if(westEnd() == true) {
        turnCW();
        forward();
        turnCW();
        forward();
        return true;
    } else {
        return false;
    }
}

//causes the robot to zig anti clockwise
bool Robot::zig() {
    int x = robot.getX();
    int y = robotGetY();


    if(eastEnd() == true) {
        turnAntiCW();
        forward();
        turnAntiCW();
        forward();
        return true;
    } else {
        return false;
    }
}

int Robot::robotGetX() {
    int x = robot.getX();
    return x;
}

int Robot::robotGetY() {
    int y = robot.getY();
    return y;
}
