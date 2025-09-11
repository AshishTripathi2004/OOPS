#include<bits/stdc++.h>
using namespace std;

//forward declaration of the class to make it discoverable
class Y;

class X{
    int data;
    public:
    X(int data){
        this->data=data;
    }
    friend int add(X,Y);
};

class Y{
    int value;
    public:
    Y(int value){
        this->value=value;
    }
    friend int add(X,Y);
};

int add(X x, Y y){
    return x.data+y.value;
}

class c2;

class c1{
    int val;
    public:
    c1(int val){
        this->val=val;
    }
    int getData(){
        return val;
    }
    friend void swap(c1&, c2&);
};

class c2{
    int val;
    public:
    c2(int val){
        this->val=val;
    }
    int getData(){
        return val;
    }
    friend void swap(c1&, c2&);
};

void swap(c1 &a, c2 &b){
    int temp=b.val;
    b.val=a.val;
    a.val=temp;
}

int main(){

    X x(3);
    Y y(8);

    cout<<add(x,y)<<endl;

    c1 a(11);
    c2 b(12);

    cout<<a.getData()<<" "<<b.getData()<<endl;
    swap(a,b);
    cout<<a.getData()<<" "<<b.getData()<<endl;

    return 0;
}