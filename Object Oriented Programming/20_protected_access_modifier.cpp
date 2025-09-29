#include<bits/stdc++.h>
using namespace std;

class Base{
    private:
    int a;

    // inherited but only accessible within the base and derived class; not outside the class anywhere
    // more secure than public; more accessible then private
    protected:
    int b;
};

class Derived : protected Base{
    
    public:
    void setData(){
        b=100;
    }
    void getData(){
        cout<<b<<endl;
    }
};

/*
                                Private Derivation      Public Derivation       Protected Derivation
        1. Private Members      NOT INHERITED           NOT INHERITED           NOT INHERITED
        2. Public Members       PRIVATE                 PUBLIC                  PROTECTED
        3. Protected Members    PRIVATE                 PROTECTED               PROTECTED
*/

int main(){
    Derived der;
    der.setData();
    der.getData();
    return 0;
}