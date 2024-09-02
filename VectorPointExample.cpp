
#include <iostream>
#include <vector>
using namespace std;

class Point {
    int x;
    int y;
public:
    Point(int v1, int v2) { x= v1; y=v2; }
    int getX() { return x;}
    int getY() {return y;}
    void setX(int value) { x= value; }
    void setY(int value) { y= value; }
    Point* getPoint() { return this; }
};
int main() {
    vector<Point> myPoints;

    myPoints.push_back(Point(1,2));
    myPoints.push_back(Point(2,3));

    for (auto p: myPoints) {

        cout<<"Point: x = "<<p.getX()<<", y = "<<p.getY()<<"\n";
    }

    Point* p1 = myPoints[0].getPoint();
    Point* p2 = myPoints[1].getPoint();
    cout<<"Collected Point, x = "<<p->getX()<<", y = "<<p->getY()<<"\n";

    return 0;
}
