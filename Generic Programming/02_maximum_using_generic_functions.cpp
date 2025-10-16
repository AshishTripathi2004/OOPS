#include<bits/stdc++.h>
using namespace std;

template <typename T> T getMaximum(T a, T b){
    return (a>b)? a:b;
}

int main(){
    cout<<getMaximum(11,22)<<endl;
    cout<<getMaximum(11.11, 10.11)<<endl;
    return 0;
}