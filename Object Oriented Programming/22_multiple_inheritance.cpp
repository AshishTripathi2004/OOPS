#include<bits/stdc++.h>
using namespace std;

class Base1{
    protected:
    int data1;

    public:
    void setData1(int d){
        data1=d;
    }
};

class Base2{
    protected:
    int data2;

    public:
    void setData2(int d){
        data2=d;
    }
};

class Base3{
    protected:
    int data3;

    public:
    void setData3(int d){
        data3=d;
    }
};

class Derived : public Base1, public Base2, public Base3{

    public:
    void show(){
        cout<<"Data 1 : "<<data1<<endl;
        cout<<"Data 2 : "<<data2<<endl;
        cout<<"Data 3 : "<<data3<<endl;
        cout<<"Sum : "<<data1+data2+data3<<endl;
    }
};
int main(){
    Derived d;
    d.setData1(10);
    d.setData2(11);
    d.setData3(12);
    d.show();
    return 0;
}