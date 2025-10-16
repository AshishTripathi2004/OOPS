#include<bits/stdc++.h>
using namespace std;

class Marks{
    
    int marks;

    public: 
    Marks(int marks){
        this->marks = marks;
        cout<<"Base class constructor is called..."<<endl;
    }

    void getMarks(){
        cout<<"Marks are : "<<this->marks<<endl;
    }

    void operator()(int marks){
        this->marks=marks;
        cout<<"Overloaded Operator is being called..."<<endl;
    }

};
int main(){
    Marks m(100);
    m.getMarks();

    m(98);
    m.getMarks();
    
    return 0;
}