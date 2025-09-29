#include <bits/stdc++.h>
using namespace std;


class Base{
    int priv_data;
    public:
    int pub_data;
    void setData();
    void getData();
};

void Base :: setData(){
    priv_data=10;
    pub_data=20;
}

void Base :: getData(){
    cout<<"priv_data : "<<priv_data<<endl;
    cout<<"pub_data : "<<pub_data<<endl;
}

class Derived : public Base{
    int der_data;
    public:
    Derived(int der_data){
        this->der_data=der_data;
    }
    void process(){
        der_data=pub_data*2;
    }
    void display(){
        //since priv_data is a private data member; it is not inherited under the public access mode
        //therefore, not accessible within the child class by any members
        //cout<<"priv_data : "<<priv_data<<endl;
        cout<<"pub_data : "<<pub_data<<endl;
        cout<<"der_data : "<<der_data<<endl;
    }
};

int main(){
    Derived der(100);
    der.setData();
    der.display();
    der.process();
    der.display();
    return 0;
}