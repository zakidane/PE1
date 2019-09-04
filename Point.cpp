#include "Point.h"

using namespace std;
//default x and y coordinates are both 0.
Point::Point(){
    x_ = 0;
    y_ = 0;
}
//this constructor takes x and y coordinates as parameters
//and builds a point object
Point::Point(float x_coordinate, float y_coordinate){
    x_ = x_coordinate;
    y_ = y_coordinate;
}
//This function outputs a string in the form (x,y)
string Point::GetCoordinate(){
        string coordinate = "( " + to_string(x_) + " , " + to_string(y_) + " )";
        return coordinate;
    }
//this function moves x and y coordiantes of a point by delta_x and delta-y respectively
void Point::Translate(float delta_x, float delta_y){
    x_ = x_ + delta_x;
    y_ = y_ + delta_y;
}
//this function takes a Point object as a parameter
//and calculates the distance between the self object and the other Point object
float Point::GetDistance(Point other){
    float x_other = other.get_x();
    float y_other = other.get_y();
    return sqrt(pow(x_ - x_other, 2) + pow(y_ - y_other, 2));

}
