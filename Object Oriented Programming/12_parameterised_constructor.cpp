#include <bits/stdc++.h>
using namespace std;

//constructors
class Point{
    int x;
    int y;

    public:
    Point();

    // public class constructor
    // it is a special member function with the same name as the class
    // helps in initiliastion of the object of the class; it is a phase in the object creation
    // does not return any value ever
    Point(int x, int y){
        // this is a paramterised constructor
        this->x=x;
        this->y=y;
    }

    friend double computeDistance(Point,Point);
    
};

// default constructor
// does not take any parameters at all
// constructor can also be defined outside the class using the scope resolution operator
Point :: Point(){
    this->x=0;
    this->y=0;
}

double computeDistance(Point a, Point b){
        int x_ = (a.x-b.x)*(a.x-b.x);
        int y_ = (a.y-b.y)*(a.y-b.y);

        double dist = sqrt(x_+y_);
        return dist;
}

int main(){
    Point p1(3,4),p2(6,7);
    cout<<computeDistance(p1,p2)<<endl;

    Point p3;
    cout<<computeDistance(p1,p3)<<endl;

    return 0;
}