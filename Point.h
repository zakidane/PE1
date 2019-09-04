#ifndef BANK_H
#define BANK_H

#include <iostream>
#include <string>
#include <cmath>


using namespace std;
//the class Point defines a point in a 2D coordinate.
//It includes variables for the x and y coordinates
//and functions to get distance between two points and translate a point
//in addition to setter and getter methods
class Point {
    private:
        float x_;
        float y_;
    public:

    //constructor
        Point();
        Point(float x_coordinate, float y_coordinate);
        //xxetter
        void set_x(int x_coordinate){x_ = x_coordinate;}
        //xgetter
        float get_x() {return x_;}
        void set_y(int y_coordinate){y_ = y_coordinate;}
        //ysetter
        //ygetter
        float get_y(){return y_;}
        //GetCoordinate
        string GetCoordinate();
        //Translate
        void Translate(float delta_x, float delta_y);
        //GetDistance
        float GetDistance(Point other);
};

#endif
