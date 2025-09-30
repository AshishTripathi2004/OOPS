#include<bits/stdc++.h>
using namespace std;

/*
    Special operators like [],(),-> cannot be overloaded simply like other operators.
    1. must be non-static member functions
    2. cannot overloaded using friend fucntions
    3. contain fixed number of parameters
*/

class Marks{
    int roll;
    int total_subs;
    vector<int>marks;

    public:
    Marks(int roll, int total_subs){
        this->total_subs=total_subs;
        marks.resize(total_subs);
    }

    void setMarks(){
        for(int i=0;i<total_subs;i++){
            int sub;
            cin>>sub;
            marks[i]=sub;
        }
    }

    int& operator[](int pos){
        if(pos < 0 || pos >= total_subs)
            throw out_of_range("Index out of bounds");
        return marks[pos];
    }
};

int main(){
    Marks m(1001,4);
    m.setMarks();
    m[2]=2;
    cout<<m[2]<<endl;
    return 0;
}