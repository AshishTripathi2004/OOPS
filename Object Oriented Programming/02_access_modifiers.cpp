#include<bits/stdc++.h>
using namespace std;

// access modifiers describe who can access the members of the class
class access{
    private:
    int a,b,c;
    public:
    int d,e;

    //creating a constructor
    access(int a, int b, int c, int d, int e){
        this->a=a;
        this->b=b;
        this->c=c;
        this->d=d;
        this->e=e;
    }

    //all functions must be declared within the class
    void getData();



};

//member functions can also be defined outside the class
//we only need to use the scope resolution operator {::}
void access::getData(){
    cout<<"a:"<<this->a<<endl;
    cout<<"b:"<<this->b<<endl;
    cout<<"c:"<<this->c<<endl;
    cout<<"d:"<<this->d<<endl;
    cout<<"e:"<<this->e<<endl;
}

int main(){
    access obj(1,2,3,4,5);
    obj.getData();
    // obj.a=90  illegal 
    // cout<<obj.a<<endl; give an error as a is a private member
    obj.d=90;
    cout<<obj.d<<endl;
    obj.getData();

    return 0;
}