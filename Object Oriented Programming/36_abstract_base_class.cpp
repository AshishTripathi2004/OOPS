#include<bits/stdc++.h>
using namespace std;

//Abstract base class
class Shape{
    public:
    virtual double getArea()=0;
    virtual double getPerimeter()=0;

    virtual ~Shape() {} 
};

class Circle : public Shape{
    int radius;
    
    public:
    Circle(int r): radius(r) {}

    double getArea() override{
        return M_PI*radius*radius;
    }

    double getPerimeter() override{
        return 2*M_PI*radius;
    }
};

class Square : public Shape{
    int side;

    public:
    Square(int s) : side(s) {}

    double getArea() override{
        return side*side;
    }

    double getPerimeter() override{
        return 4*side;
    }
};

int main() {
    Shape* shapes[2];
    shapes[0] = new Circle(5);
    shapes[1] = new Square(4);

    for(int i=0; i<2; i++){
        cout << "Area: " << shapes[i]->getArea() << endl;
        cout << "Perimeter: " << shapes[i]->getPerimeter() << endl;
        cout << "------------------" << endl;
    }

    // Clean up
    for(int i=0; i<2; i++)
        delete shapes[i];

    return 0;
}
