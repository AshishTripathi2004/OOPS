#include<bits/stdc++.h>
using namespace std;

// multiple types
template <typename T1, typename T2>
class Pair{

    T1 data1;
    T2 data2;

    public:
    // public class constructor with initialisation list
    Pair(T1 a, T2 b) : data1(a), data2(b) {}

    // get values
    void getValues(){
        cout<<"First Value : "<<data1<<endl;
        cout<<"Second Value : "<<data2<<endl;
    }

};

int main(){
    Pair<int,string> p1(11, "Ashish");
    p1.getValues();

    Pair<int,double> p2(22, 11.23);
    p2.getValues();

    return 0;
}