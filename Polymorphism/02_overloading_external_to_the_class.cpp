#include<bits/stdc++.h>
using namespace std;

class Marks{

    int internal;
    int external;

    public:
    Marks(){
        this->internal=0;
        this->external=0;
    }

    Marks(int internal, int external){
        this->internal=internal;
        this->external=external;
    }

    void display(){
        cout<<"Internal Marks : "<<internal<<endl;
        cout<<"External Marks : "<<external<<endl;
        cout<<"-----------------------------------"<<endl;
    }

    //operator overloading
    //the first object by default becomes the object invoking the operator
    //the second one acts as the parameter
    Marks operator+(Marks m){
        Marks temp;
        temp.internal=this->internal+m.internal;
        temp.external=this->external+m.external;
        return temp;
    }

    //parameter passed by reference to avoid generating a copy again
    Marks operator-(Marks&);
};

Marks Marks :: operator-(Marks &m){
     Marks temp;
        temp.internal=this->internal-m.internal;
        temp.external=this->external-m.external;
        return temp;
}


int main(){
    Marks m1(40,30);
    Marks m2(30,20);

    // use the overloaded operator
    Marks m3 = m1-m2;
    m1.display();
    m2.display();
    m3.display();

    return 0;
}