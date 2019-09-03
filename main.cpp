#include "Point.h"

using namespace std;



int main()
{
    //define 3 instances of the Point object
    Point a = Point(1,1);
    Point b = Point(1,-1);
    Point c = Point(-1,-1);
    //Print out the coordinates
    cout << "The coordinates of a are " << a.GetCoordinate() << endl;
    cout << "The coordinates of b are " << b.GetCoordinate() << endl;
    cout << "The coordinates of c are " << c.GetCoordinate() << endl;
    cout << " ------ 0 ------" << endl;
    //Print out the distances between those points
    cout <<  "The distance between a and b is " << a.GetDistance(b) << endl;
    cout <<  "The distance between a and c is " << a.GetDistance(c) << endl;
    cout <<  "The distance between c and b is " << c.GetDistance(b) << endl;
    //Translate point c by (2,2) and print out the new distances
    cout << " ------ 0 ------" << endl;
    c.Translate(2.0, 2.0);
    cout << "After translating c by (2,2) the new coordinate and distances are: " << endl;
    cout << "Coordinate of a: " << a.GetCoordinate() << endl;
    cout <<  "The distance between a and b is " << a.GetDistance(b) << endl;
    cout <<  "The distance between a and c is " << a.GetDistance(c) << endl;
    return 0;
}
