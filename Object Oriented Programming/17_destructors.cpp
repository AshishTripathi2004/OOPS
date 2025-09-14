#include<bits/stdc++.h>
using namespace std;

//destructors
//used to delete/destroy the object after it goes out of space
//used to free allocated memory
//does not take any arguments
class Number{
    int num;
    public:
    Number(int x){
        num=x;
        cout<<"Class Constructor is called for "<<num<<endl;
    }

    ~Number(){
        cout<<"Class Destructor is called for "<<num<<endl;
    }
};

int main(){
    Number n(1);
    {
        Number m(2);
        {
            Number p(3);
        }
    }
    Number m(4); //objects are destroyed in the reverse order of creation; stack-based mechanism
    return 0;
}