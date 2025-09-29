#include<bits/stdc++.h>
using namespace std;

// base class; parent class
class Employee{

    float salary;

    public:
    // in order to make a data member inheritable ; we need to make it public
    int empId;
    // default constructor
    Employee(){}

    // parameterised constructor
    Employee(int empId, float salary=10000){
        this->empId=empId;
        this->salary=salary;
    }

    void getDataEmp(){
        cout<<empId<<" "<<salary<<endl;
    }
};

/*
1. Default visibility mode : by default private
2. Private visibility mode : public members that are inherited become private members of the child class
3. Public visibility mode : private members that are inherited become public members of the child class
4. Private members of the base class are never inherited

*/

// derived class; child class
class Programmer : public Employee{

    int progId;
    int languageCode;
    
    public:
    Programmer(int p, int l){
        empId=p;
        progId=p;
        languageCode=l;
    }

    void getData(){
        cout<<progId<<" "<<languageCode<<endl;
    }


};

int main(){
    Employee Ashish(10,100000);
    Ashish.getDataEmp();
    
    Programmer Animesh(100,12);
    Animesh.getData();

    // visibility mode of the inheritence should be public
    // other wise it is not accessible outside the class
    Animesh.getDataEmp();
    return 0;
}