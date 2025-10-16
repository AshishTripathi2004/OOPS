#include<bits/stdc++.h>
using namespace std;

template <typename T>
void display(T a){
    cout<<"Value is : "<<a<<endl;
}

// specific overload
void display(int a){
    cout<<"Integer Value is : "<<a<<endl;
}

// specific overload
void display(double a){
    cout<<"Double Value is : "<<a<<endl;
}

int main(){
    // compiler finds the best match
    // compile time polymorphism
    // early binding
    display(11);
    display(11.12322);
    display("Hello");
    return 0;
}