#include<bits/stdc++.h>
using namespace std;

template <typename T> void add_function(T a, T b){
    cout << "The sum is :"<<a+b<<endl;
}

int main(){
    add_function(11,22);
    add_function(11.11,22.22);
    add_function(LLONG_MIN, LLONG_MAX);
    return 0;
}