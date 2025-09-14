#include<bits/stdc++.h>
using namespace std;

class Number{

    int num;

    public:

    Number(){
        cout<<"-----Default Constructor Called-----"<<endl;
        this->num=0;
    }

    Number(int num){
        cout<<"-----Parameterised Constructor Called-----"<<endl;
        this->num=num;
    }

    Number(Number &obj){
        // creates an existing object as a new object
        // explicit copy constructor creates a deep copy
        cout<<"-----Copy Constructor Called-----"<<endl;
        this->num=obj.num;
        // without explicit definition a default copy constructor is used to create shallow copies
        // copying is not same as re-assignment
    }

    void show(){
        cout<<"The value is : "<<num<<endl;
    }

};

int main(){
    Number n1;
    n1.show();

    Number n2(10);
    n2.show();

    Number n3(n2);
    n3.show();

    return 0;
}