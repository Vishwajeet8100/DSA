// leetcode 50
// power of a number where n can also be negative.
// you can add recursion to the same approach. (RECURSIVE)


#include<iostream>
#include<vector>
using namespace std;
double Pow(double x , int n){
    if(n == 0){
        return 1;
    }
    long long power = n;
    if(power<0){
        x = 1/x;
        power = -power;
    }
   
    double half = Pow(x,power/2);
    
        if(power % 2 == 1){   // power is odd
            return x * half * half;
        }
        else{    // power is even
            return half * half;
        }
    

    
}
int main()
{
   int x = 2;
   int n = -5;
   cout<<Pow(x,n);
    return 0;
}