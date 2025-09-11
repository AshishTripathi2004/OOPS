#include<bits/stdc++.h>
using namespace std;

// using the concepts of classes and objects
// classes work as templated of the objects
// objects are instances of the classes
// ensure modularity and data security
// code reusability
// mantainaible and secure coding practice
class Animal{

    // by default private data member
    // only accessible by the member functions of the same class
    string name;
    int feet;

    public:
    Animal(string name, int feet){
        this->name=name;
        this->feet=feet;
    }

    // create a member function
    void sayHi(){
        cout<<"Hi, My name is "<<this->name<<" and I have "<<this->feet<<" feet!"<<endl;
    }

};

int main(){
    Animal Dog("Jeremiah",4);
    Animal Duck("Donald",2);
    Animal Cat("Felicia",4);

    Dog.sayHi();
    Duck.sayHi();
    Cat.sayHi();

    return 0;
}