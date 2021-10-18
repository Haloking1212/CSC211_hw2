// This program take 6 integer arguments from the command line creating 3 coins and the robot goes looking for it.
#include <iostream>
#include <string>
#include <stdlib.h>
#include "Point.h"
#include "World.h"
#include "Robot.h"
#include "Point.cpp"
#include "World.cpp"
#include "Robot.cpp"
using namespace std;

int main(int argc, char* argv[]) {
    int steps = 0;
    int num;
    int numx1 = atoi(argv[1]);
    int numy1 = atoi(argv[2]);
    int numx2 = atoi(argv[3]);
    int numy2 = atoi(argv[4]);
    int numx3 = atoi(argv[5]);
    int numy3 = atoi(argv[6]);
    int coins = 0;
    
    //initalizing world and robot objects
    World world103[3];
    Robot robot;
    
    // user inputing points through command line
    cout << "Printing world103\n";
    world103[0].setWorld(0,numx1, numy1);
    world103[1].setWorld(1,numx2, numy2);
    world103[2].setWorld(2,numx3, numy3);
    for(int i = 0; i < 3; i++) {
        world103[i].printWorld();
    }

// input validation if less than 2 arguments are input in the command line
    if(argc < 2) {
        cout << "Error invalid number of arguments.\n";
    }

// for loop validation the command line inputs are numbers from 0 - 9
    for(int i = 1; i < argc; i++) {
        num = atoi(argv[i]);
        if(num < 0 && num > 9) {
            cout << "Error number: " << num <<  " is out of range please enter a number 0 - 9.\n";
            break;
        }
    }

// inititaling robot position
    robot.init();
    cout << endl;

// while loop robot going through all the points to find all the coins
    while(coins != 3) {

        robot.forward();
        steps += 1;
        if(robot.robotGetX() == world103[0].getCoin1X() && robot.robotGetY() == world103[0].getCoin1Y()){
            cout << "You found the first coin!\n";
            coins += 1;
            cout << "you found: " << coins << " coin\n";
            robot.printRobot();
            cout << endl;
        } else if (robot.robotGetX() == world103[1].getCoin2X() && robot.robotGetY() == world103[1].getCoin2Y()) {
            cout << "You found the second coin!\n";
            coins += 1;
            cout << "you found: " << coins << " coin\n";
            robot.printRobot();
            cout << endl;
        } else if (robot.robotGetX() == world103[2].getCoin3X() && robot.robotGetY() == world103[2].getCoin3Y()) {
            cout << "You found the third coin!\n";
            coins += 1;
            cout << "you found: " << coins << " coin\n";
            robot.printRobot();
            cout << endl;
        }

        if(robot.robotGetX() == 9) {
            robot.zig();
            steps += 2;
        } else if (robot.robotGetX() == 0) {
            robot.zag();
            steps += 2;
        }
        

    }
    cout << endl;
    cout << "Congratulations you found all the coins!\n" << "Total coin count: " << coins << endl;
    cout << "Total Steps: " << steps << endl;
    cout << endl;
    

    
    return 0;
}