#include<bits/stdc++.h>
using namespace std;



int main(){

    // bitset : container of bits
    // below is container containing exactly 8 bits
    // 8 : 00001000
    bitset<8> b1(8);

    // each bit can be accessed with the help of indices
    // b1[i] : returns the i-th index from the right
    for(int i=7;i>=0;i--){
        cout<<b1[i];
    }cout<<endl;

    // test() : access the bits at the specified position from the right
    for(int i=7;i>=0;i--){
        cout<<b1.test(i);
    }cout<<endl;

    // set() : sets the specified bit
    bitset<8> b;
    b.set(1); // 00000000-->00000010
    cout<<b<<endl;

    // reset() : resets the specified bit
    b.reset(1);
    cout<<b<<endl;

    // flip() : flip the specified bit
    b.flip(2);
    cout<<b<<endl;

    b.flip();
    cout<<b<<endl;

    // string based declaration
    bitset<8> b2(string("1111"));
    cout<<b2<<endl;

    // count set bits
    cout<<b2.count()<<endl;

    // print binary numbers from 0 to 2^n-1
    int n;
    cin>>n;
    for(int i=0;i<(1<<n);i++){
        bitset<4>mask(i);
        cout<<mask<<endl;
    }
    return 0;
}