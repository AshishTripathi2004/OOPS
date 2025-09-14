#include <bits/stdc++.h>
using namespace std;

//constructors
class Point{
    int x;
    int y;

    public:
    // public class constructor
    // it is a special member function with the same name as the class
    // helps in initiliastion of the object of the class; it is a phase in the object creation
    // does not return any value ever
    Point(int x, int y){
        this->x=x;
        this->y=y;
    }

    friend double computeDistance(Point,Point);
    
};

double computeDistance(Point a, Point b){
        int x_ = (a.x-b.x)*(a.x-b.x);
        int y_ = (a.y-b.y)*(a.y-b.y);

        double dist = sqrt(x_+y_);
        return dist;
}

int main(){
    Point p1(3,4),p2(6,7);
    cout<<computeDistance(p1,p2)<<endl;
    return 0;
}