// find exponential answer.
#include<iostream>
#include<vector>
using namespace std;

int sol(int a, int  n){
    if(n==1){
        return a;      // base condition    as 2^1 = 2  i.e a^1 = a.
    }
    return a * sol(a, n-1);
}
int main()
{
    int a =2; // base
    
    int n = 4; // power

    // here we want ans of 2^4.
    cout<<sol(a,n);
    return 0;
}