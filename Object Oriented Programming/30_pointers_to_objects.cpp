#include<bits/stdc++.h>
using namespace std;

class Complex{
    int real;
    int img;

    public:
    Complex(int r, int i) : real(r),img(i) {};

    void getNumber(){
        cout<<real<<"+"<<img<<"i"<<endl;
    }
};

int main(){
    Complex c1(10,20);
    Complex *ptr = &c1;
    c1.getNumber();

    // Arrow operator
    // used to directly dereference the pointers of a class
    ptr->getNumber();
    return 0;
}