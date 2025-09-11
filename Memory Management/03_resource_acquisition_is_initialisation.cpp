#include<bits/stdc++.h>
using namespace std;

// it means upon the creation of the resource
// the creator is not obliged to manually free, release or delete the resource
// done automatically by the destructor
// maps the resource lifetime to the object lifetime
class MyClass{
    public: 
    MyClass(){
        cout<<"Resource Acquired"<<endl;
    }
    ~MyClass(){
        cout<<"Resource Released"<<endl;
    }
};



int main(){
    // since there is only default constructor avalaible
    // MyClass obj() does not create an object
    // this is the most vexing parse quirk in C++
    // RESOLUTION: avoid parentheses at all or use curly braces
    MyClass obj{};
    MyClass obj1;
    return 0;
}