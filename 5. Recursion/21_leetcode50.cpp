// leetcode 50
// power of a number where n can also be negative.
// its called as binary power approach 
// you can add recursion to the same approach.


#include<iostream>
#include<vector>
using namespace std;
double Pow(double x , int n){
    double ans = 1;
    long long power = n;
    if(power<0){
        x = 1/x;
        power = -power;
    }
    while(power>0){
        if(power % 2 == 1){   // power is odd
            ans = ans * x;
            power--;
        }
        else{    // power is even
            x = x* x;
            power = power/2;
        }
    }
    return ans;
    
}
int main()
{
   int x = 2;
   int n = -5;
   cout<<Pow(x,n);
    return 0;
}