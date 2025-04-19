// finding odd and even using bitwise & operator.
// all odd no have 1 as LSB in binary representation.
//Yes, the AND operator (&) is called a bitwise operator when used in the context of binary numbers.


//When you AND it with any number, it only checks the rightmost bit (the least significant bit).
// If the rightmost bit is 1 (odd number), the result is 1.
// If the rightmost bit is 0 (even number), the result is 0.
// So, using n & 1 gives a quick way to check if a number is odd or even.


#include<iostream>
#include<vector>
using namespace std;
int main()
{
    cout<<"Enter no to check if no is odd and even : ";
    int n ;
    cin>>n;
    if(n & 1){
        cout<<"It is a odd no ";
    }else{
        cout<<"It is a even no ";
    }

    
    return 0;

}