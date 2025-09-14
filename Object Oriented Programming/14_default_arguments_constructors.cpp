#include<bits/stdc++.h>
using namespace std;

class Point{

    int x,y;

    public:
    // if only value of x passed
    // y assumes the value as 9 by default
    Point(int x, int y=9){
        this->x=x;
        this->y=y;
    }

    void printData();
};

void Point :: printData(){
    cout<<this->x<<" "<<this->y<<endl;
}

int main(){
    Point p1(11,22),p2(4);
    p1.printData();
    p2.printData();
    return 0;
}