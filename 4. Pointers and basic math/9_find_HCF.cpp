// finding hcf (highest common factor) also called as GCD (greatest common divisor).
// gfg question - gcd of two nunbers 
// leetcode - question 1979
// this is called as euclids algorithm.
#include<iostream>
#include<vector>
using namespace std;
int hcf(int a, int b){
    while(a > 0 && b>0){
        if(a >= b){
            a = a - b;
        }
        if( b > a){
            b = b - a;
        }
    }
    if(a == 0 ){
        return b;
    }
    else{
        return a;
    }
}
int main()
{
    int a = 6;
    int b = 3;
    cout<<hcf(a,b);
    return 0;
}