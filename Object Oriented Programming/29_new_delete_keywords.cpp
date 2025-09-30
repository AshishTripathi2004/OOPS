#include<bits/stdc++.h>
using namespace std;

int main(){
    // Basic pointer examples
    int a = 4;
    int *ptr = &a;
    cout<<"a is "<<a<<" and stored at location "<<ptr<<endl;
    cout<<"Dereferencing the address we get back "<<*ptr<<endl;

    // Dynamic initialisation of variables using the new keyword
    // we use the class constructors with the new keyword
    // returns a pointer to the variable
    int *p = new int(40);
    cout<<*p<<endl;

    // 'new' dynamically allocates memory from the heap
    // returns a pointer to the newly allocated memory
    float *f = new float(40.789);
    cout<<*f<<endl;


    // Memory cleanup
    // Every 'new' should be paired with 'delete' 
    // to free the dynamically allocated memory
    delete f;
    delete p;
    return 0;
}