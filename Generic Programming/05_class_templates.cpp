#include<bits/stdc++.h>
using namespace std;

template <typename T>
class Vectors{
    int size;
    vector<T>dims;

    public:
    // public class constructor
    Vectors(int size){
        this->size = size;
        dims.resize(size);
        cout<<"Enter Values for the vector "<<endl;
        for(int i=0;i<size;i++){
            cout<<"Enter element : ";
            cin>>dims[i];
        }
    }

    // display the vector
    void display(){
        cout<<"[ ";
        for(int i=0;i<size;i++){
           cout<<dims[i]<<" ";
            
        }
        cout<<"]"<<endl;
    }

    // calculate the dot product
    void dotProduct(Vectors &v){
        cout<<"The product is :"<<endl;
        cout<<"[ ";
        for(int i=0;i<size;i++){
            T prod = (this->dims[i]) * v.dims[i];
            cout<<prod<<" ";
        }
        cout<<"]"<<endl;
    }

};

int main(){
    Vectors<int> a(3);
    Vectors<int> b(3);

    a.display();
    b.display();

    a.dotProduct(b);

    return 0;
}