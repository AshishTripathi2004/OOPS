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
    // create a shared pointer
    // refcount is set to 1
    auto a=make_shared<MyClass>();
    a->sayHello();
    cout<<"Ref count value:"<<a.use_count()<<endl;

    // refcount will increase to 2
    auto b=a;
    b->sayHello();
    cout<<"Ref count value:"<<b.use_count()<<endl;

    //weak pointer simply observes without any ownership
    //helps in checking if a pointer is alive or not
    weak_ptr<MyClass>w=a;
    
    if(auto locked = w.lock()){
        locked->sayHello();
    }else{
        cout<<"No reference found"<<endl;
    }

    //one owner gone
    //decrements the counter by one
    a.reset();
    cout<<"Ref count value:"<<b.use_count()<<endl;

    b.reset();
    cout<<"Ref count value:"<<b.use_count()<<endl;

    //now the weak pointer has nothing to point to
    //it returns no reference found
    if(auto locked = w.lock()){
        locked->sayHello();
    }else{
        cout<<"No reference found"<<endl;
    }

    return 0;
}