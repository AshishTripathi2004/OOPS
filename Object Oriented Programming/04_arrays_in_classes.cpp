#include<bits/stdc++.h>
using namespace std;

//declare a class shop
class Shop{

    private:
    int items[100];
    int prices[100];
    int counter;

    public:
    void initCounter(){
        this->counter=0;
    }

    void setPrice(){
        cout<<"Enter Item ID for your item no. "<<counter<<" :";
        cin>>items[counter];
        cout<<"Enter the price for the item with id "<<items[counter]<<" :";
        cin>>prices[counter];
        counter++;
    }

    void displayItems(){
        cout<<"Items in the catalog are listed:"<<endl;
        cout<<"--------------------------------"<<endl;
        for(int i=0;i<counter;i++){
            cout<<items[i]<<" : "<<prices[i]<<endl;
        }
    }

};

int main(){
    Shop shop;
    shop.initCounter();
    shop.setPrice();
    shop.setPrice();
    shop.setPrice();
    shop.displayItems();
    return 0;
}