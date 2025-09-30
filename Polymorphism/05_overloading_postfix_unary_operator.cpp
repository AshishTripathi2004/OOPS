#include<bits/stdc++.h>
using namespace std;

class Marks{
    int m;

    public:
    Marks(){
        this->m=0;
    }

    Marks(int m){
        this->m=m;
    }

    void show(){
        cout<<"Marks : "<<m<<endl;
    }

    //specify the int to demarcate it as postfix operators
    void operator++(int){
        m+=1;
    }

    void operator--(int){
        m-=1;
    }
};

int main(){
    Marks m(25);
    m.show();
    m++;
    m.show();
    m--;
    m.show();
    return 0;
}