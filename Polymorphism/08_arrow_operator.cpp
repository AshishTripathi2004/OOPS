#include<bits/stdc++.h>
using namespace std;

class Marks{

    int marks;

    public:
    Marks(int m) : marks(m) {}

    void getMarks(){
        cout<<this->marks<<endl;
    }

};

class MarksPtr{

    Marks * ptr;

    public:
    MarksPtr(Marks* ptr = nullptr){
        this->ptr=ptr;
    }

    Marks * operator->(){
        cout<<"Overloaded arrow operator is being called..."<<endl;
        return ptr;
    }
};

int main(){
    Marks m(89);
    m.getMarks();

    MarksPtr p(&m);
    p->getMarks();

    return 0;
}