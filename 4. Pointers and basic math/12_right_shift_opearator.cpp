// just for knowledge 
// right shift ooperator 

// In general, b >> n shifts the bits of
//  b to the right by n positions, effectively performing an integer division by 2^n.

// right most bit is discarded and 0 is added as leftmost


#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int b = 10;
    b = b>>1;
    cout<<b<<endl;
    // output will be 10 / 2 = 5

    int c = 16;
    c = c>>2;
    cout<<c;
    // output will be 16/2^2 = 16/4 = 4
    return 0;
}