#include<bits/stdc++.h>
using namespace std;

//static data members
//shared by all instances of the class
//all objects have access to a shared member
//default value is 0
//lifetime is throughout the lifetime of the program
class Employee{
    int id;
    static int count;

    public:
    void setData(){
        cout<<"Enter Employee ID : ";
        cin>>id;
        count++;
    }

    void getData(){
        cout<<"Employee Id is : "<<id<<endl;
    }

    //static member functions are used to access the static data members
    //cannot access other non-static members
    static void getCount(){
        cout<<"The number of employees :"<<count<<endl; 
    }
};

int Employee::count;

int main(){
    Employee EMP1;
    EMP1.setData();
    EMP1.getData();

    Employee EMP2;
    EMP2.setData();
    EMP2.getData();

    // static data members can be called with the help of the class name 
    // and the scope resolution operator
    Employee::getCount();
    EMP1.getCount();
    
    return 0;
}