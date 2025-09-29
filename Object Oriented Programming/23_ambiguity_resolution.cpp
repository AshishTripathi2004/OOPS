#include<bits/stdc++.h>
using namespace std;

class Base1{
    public:
    void greet(){
        cout<<"It's me! Hi, I'm the problem it's me!"<<endl;
    }
};

class Base2{
    public:
    void greet(){
        cout<<"I love the game!"<<endl;
    }
};

class Derived : public Base1, public Base2{
    public:
    void greet(){
        //scope resolution operator is used
        //this enusres that the greet function is called from the base1 class
        //used for ambiguity resolution
        Base1 :: greet();
    }
};

int main(){
    Derived d;
    d.greet();
    return 0;
}