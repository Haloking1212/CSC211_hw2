#ifndef World_H
#define World_H
#include "Point.h"

class World {
    private:
        Point points[3];

    public:
        void printWorld();
        void setWorld(int i, int x, int y);
        int getCoin1X();
        int getCoin1Y();
        int getCoin2X();
        int getCoin2Y();
        int getCoin3X();
        int getCoin3Y();


};


#endif