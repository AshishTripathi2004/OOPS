#include<bits/stdc++.h>
using namespace std;

class Student{
    int roll;
    string name;

    public:

    // make sure to return the reference 
    // this make sures consistent updates
    Student& setRoll(int roll){
        this->roll=roll;
        return *this;
    }

    Student& setName(string name){
        this->name=name;
        return *this;
    }

    void print(){
        cout<<"Roll : "<<roll<<endl;
        cout<<"Name : "<<name<<endl;
    }

};

int main(){
    Student s;
    s.setRoll(10).setName("Ashish").print();
    return 0;
}