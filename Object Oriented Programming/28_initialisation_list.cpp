#include<bits/stdc++.h>
using namespace std;

class Test{
    int a;
    int b;

    public:
    // the initialisation should be in the order of the declaration of the variables
    // otherwise, absurd results are produced
    Test(int i, int j): a(i),b(j){
        cout<<"Constructor 1 executed...."<<endl;
        cout<<"a : "<<a<<endl;
        cout<<"b : "<<b<<endl;
    }
};

class Test2{
    int a;
    int b;

    public:
    // the initialisation should be in the order of the declaration of the variables
    // otherwise, absurd results are produced
    Test2(int i, int j): a(i),b(a+j){
        cout<<"Constructor 2 executed...."<<endl;
        cout<<"a : "<<a<<endl;
        cout<<"b : "<<b<<endl;
    }
};

int main(){
    Test t(4,6);
    Test2 t2(4,6);
    return 0;
}