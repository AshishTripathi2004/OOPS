#include<bits/stdc++.h>
using namespace std;

template <typename T1, typename T2> auto addValues(T1 a, T2 b) -> decltype(a+b){
    return a+b;
}

int main(){
    cout<<addValues(11,22.34)<<endl;
    cout<<addValues(111111, LLONG_MIN)<<endl;
    return 0;
}