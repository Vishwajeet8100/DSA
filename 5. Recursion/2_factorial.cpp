// factrial using recursion done by me.
// there is another simple method in next slide.

#include<iostream>
#include<vector>
using namespace std;
int factorial(int n , int ans){
    if(n==0){
        return ans;
    }
    ans = ans * n;
    factorial(n-1,ans);
}
int main()
{
    int n ;
    cout<<"Enter the no : ";
    cin>>n;
    int ans = 1;
    cout<<factorial(n,ans);
    return 0;
}