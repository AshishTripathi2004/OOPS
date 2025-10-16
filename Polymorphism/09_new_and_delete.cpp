#include<bits/stdc++.h>
using namespace std;

/*
    Overloading new and delete operators
    allows automatic garbage collection
    which is not automatically called

    It also helps in manually customising 
    memory allocation
*/

class details{
    string name;
    int age;

    public:
    // default class constructor
    details(){
        name = "no_name";
        age = 0;
    }

    // paramterised constructor
    details(string name, int age){
        this->name = name;
        this->age = age;
    }

    // getter function
    void getDetails(){
        cout<<"Hi! My name is "<<this->name<<" and "<<" I am "<<this->age<<" years old."<<endl;
    }

    // overload the new keyword
    void * operator new(size_t size){
        void * ptr;
        cout<<"Overloaded operator new."<<endl;
        cout<<"The size is "<<size<<endl;
        ptr = malloc(size);
        if(!ptr){
            bad_alloc ba;
            throw ba;
        }
        return ptr;
    }

    // overload the delete keyword
    void  operator delete(void * ptr){
        cout<<"Overloded operator delete."<<endl;
        free(ptr);
    }

};

int main(){
    details *d;
    try{
        string name;
        cout<<"Enter name : ";
        cin>>name;

        int age;
        cout<<"Enter age : ";
        cin>>age;

        d = new details(name, age);
        d->getDetails();
        delete d;
    }catch(bad_alloc ba){
       cout<<ba.what()<<endl;
    }
    return 0;
}