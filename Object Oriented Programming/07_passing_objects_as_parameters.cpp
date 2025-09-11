#include<bits/stdc++.h>
using namespace std;

//create a complex class
class Complex{

    int real;
    int img;

    public:
    void setData(int real,int img){
        this->real=real;
        this->img=img;
    }

    void setDataBySum(Complex c1, Complex c2){
        this->real=c1.real+c2.real;
        this->img=c1.img+c2.img;
    }

    void printNumber(){
        cout<<real<<" + "<<img<<"i"<<endl;
    }

};

int main(){
    Complex c1,c2,c3;

    c1.setData(1,2);
    c1.printNumber();

    c2.setData(3,4);
    c2.printNumber();

    c3.setDataBySum(c1,c2);
    c3.printNumber();
    return 0;
}