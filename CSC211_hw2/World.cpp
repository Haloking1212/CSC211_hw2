#include <iostream>
#include "World.h"
#include "Point.h"
using namespace std;

// prints all the points of the coin
void World::printWorld() {
    int i = 0;
    points[i].printPoint();


}

// sets all the points for the coins
void World::setWorld(int i, int x, int y) {
    for(i = 0; i < 3; i++) {
        points[i].set(x,y);
    }
}

int World::getCoin1X() {
    return points[0].getX();
}

int World::getCoin1Y() {
    return points[0].getY();
}

int World::getCoin2X() {
    return points[1].getX();
}

int World::getCoin2Y() {
    return points[1].getY();
}

int World::getCoin3X() {
    return points[2].getX();
}

int World::getCoin3Y() {
    return points[2].getY();
}

