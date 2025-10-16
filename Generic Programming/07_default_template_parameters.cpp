#include<bits/stdc++.h>
using namespace std;

template <class T1 = int, class T2 = string>
class StudentDetails{
    T1 roll;
    T2 name;

    public:
    StudentDetails(T1 roll, T2 name){
        this->roll = roll;
        this->name = name;
    }

    void display(){
        cout<<" Roll is :"<<roll<<endl;
        cout<<" Name is : "<<name<<endl;
    }
};

int main(){
    StudentDetails<> s(11, "Ashish");
    s.display();

    StudentDetails<long long, string> t(111123212321122321, "Ashish");
    t.display();
    return 0;
}