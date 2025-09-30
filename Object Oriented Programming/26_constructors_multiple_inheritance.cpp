#include<bits/stdc++.h>
using namespace std;

/*

    CASE 1 : derived constructors in single inheritence
             class B : public A{};
             first class A constructor called,then B 
             In this case base class constructor is always called prior to the derived class

    CASE 2 : derived constructors in muliple inheritence
             class C : public A, public B{};
             first class A constructor called,then B and then C 
             In case of multiple inheritance, the order of calling of constructors 
             is defined by the order of the classes in declaration

    CASE 3 : derived constructors in multiple inheritence with virtual base class
             class C : public A, virtual public B{};
             first class B constructor called,then A and then C 
             In case of multiple inheritance, the order of calling of constructors 
             is defined by the order of the classes in declaration unless a virtual base class is present
             If a virtual base class is present, then its constructors are called first
            
*/

class Base1{
    int data1;

    public:
    Base1(int d){
        cout<<"Base class 1 constructor called..."<<endl;
        data1=d;
    }

    void getData1(){
        cout<<"Data 1 : "<<data1<<endl;
    }
};

class Base2{
    int data2;

    public:
    Base2(int d){
        cout<<"Base class 2 constructor called..."<<endl;
        data2=d;
    }

    void getData2(){
        cout<<"Data 2 : "<<data2<<endl;
    }
};

class Single : public Base1, public Base2{
    int data3;

    public:
    Single(int a, int b, int c):Base1(a) , Base2(b){
        cout<<"Single class constructor called..."<<endl;
        data3=c;
    }

    void getData(){
        getData1();
        getData2();
        cout<<"Data 3 : "<<data3<<endl;
    }
};

int main(){
    Single s(10,15,25);
    s.getData();
    return 0;
}