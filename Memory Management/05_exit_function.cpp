#include<bits/stdc++.h>
using namespace std;


// exit(0) : takes 0 to indicate normal program termination
// indicated that program has terminated immediately irrespective of it being in main or not
// closes files and output streams but stack varaible destructors are not called
// global destructors run only

void cleanup(){
    cout<<"The current program is being terminated after exiting..."<<endl;
}

int main(){

    
    atexit(cleanup);

    cout<<"Program is running...."<<endl;
    exit(0);
    cout<<"This will never be printed..."<<endl;

    return 0;
}