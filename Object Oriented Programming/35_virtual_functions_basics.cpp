#include<bits/stdc++.h>
using namespace std;

// virtual functions
// used to override default behaviour


class base{
    public:
    int var_base;

    virtual void show(){
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

    // even though the base class pointer 
    // still it will run the function of the derived class
    // because of the use of virtual functions in the base class
    base_object_pointer->var_base=10;
    derived_obj.var_derived=20;
    base_object_pointer->show();
    return 0;
}