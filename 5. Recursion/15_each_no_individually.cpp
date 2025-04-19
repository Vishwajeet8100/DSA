// print each integer of an number individually.

#include<iostream>
#include<vector>
using namespace std;
void printlast(int n){
    if(n==0){
        return;
    }
    printlast(n/10);     // head recursion to print in opposite order.
    int last = n % 10;
    cout<<last<<" ";
}
int main()
{
    int n = 6456;
 
    printlast(n);
   
    return 0;
}