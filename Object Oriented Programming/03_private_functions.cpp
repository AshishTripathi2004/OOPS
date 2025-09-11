#include<bits/stdc++.h>
using namespace std;

class Binary{

    private:
    string binary;
    int s=0;
    void chkbin(){
        for(int i=0;i<s;i++){
            if(binary[i]!='0' && binary[i]!='1'){
                cout<<"Not a valid binary string..."<<endl;
                exit(0);
            }
        }
    }

    public:
    Binary(string binary){
        this->binary=binary;
        this->s=binary.size();
    }

    

    void ones_complement(){
        chkbin();
        for(int i=0;i<s;i++){
            if(binary[i]=='0'){
                binary[i]='1';
            }else{
                binary[i]='0';
            }
        }
    }

    void display(){
        for(int i=0;i<s;i++){
            cout<<binary[i];
        }
        cout<<endl;
    }

};

int main(){
    Binary bin("112101");
    
    bin.display();
    // bin.chkbin(); throws an error as chkbin() is now a private member
    bin.ones_complement();
    bin.display();

    return 0;
}