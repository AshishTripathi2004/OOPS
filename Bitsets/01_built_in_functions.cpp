#include <bits/stdc++.h>
using namespace std;

int main()
{

    int x = 29;                    // binary: 11101
    cout << __builtin_popcount(x)<<endl; // 4

    int y = 40;               // binary: 101000
    cout << __builtin_ctz(y)<<endl; // 3 (since 2^3 = 8 is the lowest set bit)

    int z = 16;               // binary: 0001 0000
    cout << __builtin_clz(z)<<endl; // 27 (on 32-bit int)

    int w = 7;                   // binary: 111
    cout << __builtin_parity(w)<<endl; // 1 (odd count = 3)

    return 0;
}