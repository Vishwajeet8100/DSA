#include<iostream>
#include<vector>
using namespace std;
int fibo(int n){
    if(n == 1 ){
        return 1;
    }
    if(n == 0){
        return 0;
    }

    int  fib = fibo(n-1) + fibo(n-2);

    return fib;
}
int main()
{
    int n = 7;
    cout<<fibo(n);
    // 0 1 1 2 3 5 8 13 
    return 0;
}