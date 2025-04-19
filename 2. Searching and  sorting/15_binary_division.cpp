// divide no using binary search
/// same question as sqrt we have to create a sample space.
// we did this question without creating a vector or array, can do it by creating them also.
#include<iostream>
#include<vector>
using namespace std;
int quotient ( int dividend , int divisor){
    int s = 0;
    int e = dividend ; 
    int mid = s+(e-s)/2;
    int ans = -1;
    while(s<=e){
        if(mid * divisor == dividend){
            return mid;
        }
        else if(mid * divisor < dividend){
           ans = mid;
           s = mid + 1;     
        }
        else{
            e = mid -1 ;
        }
        mid = s+(e-s)/2;
    }
    return ans;
}
int main()
{
    int divisor = 3;
    int dividend = 10;
    cout<<quotient(dividend,divisor);
    return 0;
}