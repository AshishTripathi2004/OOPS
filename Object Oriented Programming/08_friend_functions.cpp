#include<bits/stdc++.h>
using namespace std;

// complex class
class Complex{

    int real;
    int img;

    public: 
    void setNumber(int real, int img){
        this->real=real;
        this->img=img;
    }

    void printNumber(){
        cout<<this->real<<" + "<<this->img<<"i"<<endl;
    }

    //friend function declaration
    //ensures this external function can access the private data members of the class
    friend Complex sumComplex(Complex a, Complex b);
};


// this function tries to access the private data members of the complex class which violates the principles of abstraction
// this is not permissible unless the function is declared
// cannot be called through an object; independently invoked function
Complex sumComplex(Complex a, Complex b){
    Complex sum;
    sum.real=a.real+b.real;
    sum.img=a.img+b.img;
    return sum;
}

int main(){
    Complex a,b,sum;

    a.setNumber(1,2);
    a.printNumber();

    b.setNumber(11,22);
    b.printNumber();

    sum = sumComplex(a,b);
    sum.printNumber();
    
    return 0;
}