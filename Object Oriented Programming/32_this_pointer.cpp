#include<bits/stdc++.h>
using namespace std;

class A{
    int a;

    public:
    A(int a){
        // 'this->a' refers to the data member
        // 'a' (without this) is the constructor parameter
        this->a=a;
    }
    
    void getData(){
        cout<<this->a<<endl;
    }

    A* getObject(){
        return this;
    }

};

int main(){
    //this keyword
    //points to the object that invokes the member function
     A a(10);

    a.getData();
    cout<<"Address of a "<<&a<<endl;
    cout<<"Address of a "<<a.getObject()<<endl;
    return 0;
}