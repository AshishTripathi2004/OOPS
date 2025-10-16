#include<bits/stdc++.h>
using namespace std;

template <typename T> void mySwap(T &a, T &b){
    cout<<"Before Swap"<<endl;
    cout<<"a :"<<a<<endl;
    cout<<"b :"<<b<<endl;

    T temp = a;
    a=b;
    b=temp;

    cout<<"After Swap"<<endl;
    cout<<"a :"<<a<<endl;
    cout<<"b :"<<b<<endl;
}

int main(){
    int a = 10;
    int b = 20;
    mySwap(a,b);

    double x = 11.12;
    double y = 34.56;
    mySwap(x,y);

    return 0;
}