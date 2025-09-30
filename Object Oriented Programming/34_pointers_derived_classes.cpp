#include<bits/stdc++.h>
using namespace std;


class base{
    public:
    int var_base;

    void show(){
        cout<<var_base<<endl;
    }

};

class derived : public base{
    public:
    int var_derived;
    
    void show(){
        cout<<var_base<<endl;
        cout<<var_derived<<endl;
    }
};

int main(){
    // it is allowed for a pointer of the base class to point to an object of the derived class
    base * base_object_pointer;
    base base_obj;
    derived derived_obj;
    base_object_pointer = &derived_obj;

    base_object_pointer->var_base=10;
    base_object_pointer->show();
    // although it cannot be used to access the derived class members
    derived_obj.var_derived=20;
    derived_obj.show();
    
    derived * derived_class_pointer;
    derived_class_pointer = &derived_obj;
    // at run time it is decided which definition of show should be used
    // run time polymorphism / late binding
    // method overriding
    derived_class_pointer->show();
    return 0;
}