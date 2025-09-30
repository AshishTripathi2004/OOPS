#include<bits/stdc++.h>
using namespace std;


class Marks{

    int m;

    public:
    Marks(){
        m=0;
    }

    Marks(int m){
        this->m=m;
    }

    void show(){
        cout<<"Marks : "<<m<<endl;
    }

    void operator+=(int bonus){
        this->m=this->m+bonus;
    }

    friend void operator-=(Marks &currObj, int deduction);
};

void operator-=(Marks &currObj, int deduction){
    currObj.m-=deduction;
}

int main(){
    Marks m(45);
    m.show();
    m+=10;
    m.show();
    m-=15;
    m.show();
    return 0;
}