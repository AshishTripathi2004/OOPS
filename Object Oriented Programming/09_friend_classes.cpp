#include<bits/stdc++.h>
using namespace std;

//forward declaration of the class to make it identifiable
class Complex;

class Calculator{
    public:
    int sum(int a, int b){
        return (a+b);
    }

    //function declaration with dummy parameters
    int getRealSum(Complex,Complex);
    int getImgSum(Complex,Complex);

};

class Complex{
    int real;
    int img;
    //declare the entire class as friend
    //all member functions of this class can access the private data members of the friend class
    friend class Calculator;

    public: 
    void setData(int a, int b){
        this->real=a;
        this->img=b;
    }

    void printNumber(){
        cout<<this->real<<" + "<<this->img<<"i"<<endl;
    }

};

int Calculator :: getRealSum(Complex c1, Complex c2){
    return (c1.real+c2.real);
}

int Calculator :: getImgSum(Complex c1, Complex c2){
    return (c1.img+c2.img);
}

int main(){
    Complex a,b;
    int res,resc;
    
    a.setData(1,2);
    a.printNumber();

    b.setData(2,4);
    b.printNumber();

    Calculator calc;
    res=calc.getRealSum(a,b);
    resc=calc.getImgSum(a,b);

    cout<<"Real Sum : "<<res<<endl;
    cout<<"Img Sum : "<<resc<<endl;

    return 0;
}