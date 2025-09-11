#include<bits/stdc++.h>
using namespace std;

class Student{
    int id;
    string name;

    public:
    void setData(){
        cout<<"Enter id :";
        cin>>id;
        cout<<"Enter name :";
        cin>>name;
    }

    void getData(){
        cout<<"Employee id is "<<id<<" and Employee name is "<<name<<endl;
    }

    
};

int main(){
    //create an array of objects of the Student class
    Student arr[5];
    for(int i=0;i<5;i++){
        arr[i].setData();
        arr[i].getData();
    }
    return 0;
}