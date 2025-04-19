// leetcode 231 -->   simple easy    (similarly leetcode 326)
//Given an integer n, return true if it is a power of two. Otherwise, return false.
// An integer n is a power of two, if there exists an integer x such that n == 2x.

#include<iostream>
#include<vector>
using namespace std;
bool is_power(int n){
    if(n<=0){               // edge case.
        return false;
    }
    if(n%2 != 0 ){
        return false;
    }
    if( n/2 == 1){
        return true;
    }

    return is_power(n/2);
}
int main()
{
    int n = 16;
    if(is_power(n)){
        cout<<"Yes, "<<n<<" comes under some power of 2";
    }
    else{
        cout<<" No it does not come under some power of two";
    }
    return 0;
}
