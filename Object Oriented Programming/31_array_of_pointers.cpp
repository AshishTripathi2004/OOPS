#include<bits/stdc++.h>
using namespace std;

class Student{
    int roll;
    string name;

    public:
    void setData(int r, string n){
        roll=r;
        name=n;
    }

    void getData(){
        cout<<"Roll : "<<roll<<" Name : "<<name<<endl;
    }
};

int main(){
    int size=3;

    // creates an array of size 3
    // stores the address of the first member in the ptr pointer
    Student *ptr = new Student[size];

    for(int i=0;i<size;i++){
        int roll;
        cin>>roll;
        string name;
        cin>>name;

        (ptr+i)->setData(roll,name);
    }

    for(int i=0;i<size;i++){
        (ptr+i)->getData();
    }

    delete []ptr;
    
    return 0;
}