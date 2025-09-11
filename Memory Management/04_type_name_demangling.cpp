#include<bits/stdc++.h>
#include <cxxabi.h>
using namespace std;

typedef long long LL;

int main(){
    LL a=12232;
    cout<<a<<endl;
    /*
    BREAK DOWN

    1. use the cxxabi library - not a part of the standard C++ Library; GCC Itanium C++ ABI implementation
    2. abi:: - ensures application binary interface is used; abi contains low-level functions
    3. __cxa_demangle -  lives in the abi namespace
    4. first argumaent -  it is the mangled name which the complier saves in an encoded and compact format
    5. second and third arguments - represents the buffer and its length
    6. status - set to 0 if demangling successful; otherwise non-zero
    
    */
    int status;
    string realname = abi::__cxa_demangle(typeid(a).name(), 0, 0, &status);
    cout<<realname<<endl;
    cout<<status<<endl;
    return 0;
}