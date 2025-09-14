#include<bits/stdc++.h>
using namespace std;

// constructor overloading
// depends upon the number of parameters passed, the corresponding constructor is called
class Rectangle{
    int length;
    int width;

    public: 

    //default constructor
    //sets the values at 5 and 5
    Rectangle(){
        this->length=5;
        this->width=5;
    }

    //parameterised constructor with just one parameter
    Rectangle(int length){
        this->length=length;
        this->width=5;
    }

    //parameterised constructor with more than one parameter
    Rectangle(int length, int width){
        this->length=length;
        this->width=width;
    }

    int getArea(){
        return length*width;
    }

};

int main(){
    Rectangle r1,r2(2),r3(12,4);
    cout<<r1.getArea()<<endl;
    cout<<r2.getArea()<<endl;
    cout<<r3.getArea()<<endl;
    return 0;
}