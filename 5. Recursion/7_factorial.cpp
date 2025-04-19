#include<iostream>
#include<vector>
using namespace std;
int factorial(int n){
    if(n == 1){
        return 1;     // when we will get factorial(1) it will return 1 as 1! = 1;
    }
    int ans = n * factorial(n-1);
    return ans;
}
int main()
{
    int a = 5;
    cout<<factorial(a);
    return 0;
}