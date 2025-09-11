#include<bits/stdc++.h>
using namespace std;

class MyClass{


    public:
    MyClass(){
        cout<<"Object Created"<<endl;
    }

    ~MyClass(){
        cout<<"Object Destroyed"<<endl;
    }

    void sayHello(){
        cout<<"Hello"<<endl;
    }


};

int main(){
    //creates a an object and p owns it
    //unique pointer is created and automatically deleted once out of scope
    //prevents memory leaks or program crashes
    auto p = make_unique<MyClass>();
    p->sayHello();

    //transfer the ownership
    //p becomes null
    auto q=move(p);
    q->sayHello();


    //release will return the raw pointer and disable auto delete
    auto raw=q.release();
    raw->sayHello();

    //manual deletion using the delete keyword
    delete raw;

    return 0;
}