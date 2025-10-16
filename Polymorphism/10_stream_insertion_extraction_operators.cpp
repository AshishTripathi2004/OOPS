#include<bits/stdc++.h>
using namespace std;

/*
    Stream Insertion and Stream Extraction Operators
    << : stream insertion operator; ostream
    >> : stream extraction operator; istream

    Stream operators are always overloaded as friend functions of the class
*/

class Person{

    string name;
    int age;

    public:
    Person(){
        this->name = "no_name";
        this->age = 0;
    }

    void getDetails(){
        cout<<"Hi! My name is "<<this->name<<" and "<<" I am "<<this->age<<" years old."<<endl;
    }

    friend ostream &operator <<(ostream &output, Person &p);
    friend istream &operator >>(istream &input, Person &p);
};

ostream &operator << (ostream& output, Person &p){
    output<<"Overloading the stream insertion operator"<<endl;
    output<<"The name is "<<p.name<<" and the age is "<<p.age<<endl;
    return output;
}

istream &operator >> (istream& input, Person &p){
    cout<<"Overloading the stream extraction operator"<<endl;
    input>>p.name>>p.age;
}

int main(){
    cout<<"Enter name and age..."<<endl;
    Person p;
    cin >> p;
    cout << p;
    return 0;
}