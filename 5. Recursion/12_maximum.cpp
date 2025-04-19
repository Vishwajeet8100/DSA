// finding maximum elemnet using recursion.
#include<iostream>
#include<vector>
#include<climits>
using namespace std;
void maximum(int arr[], int n , int i , int &maxi){
    if(i>=n){
        return;
    }
    maxi = max(arr[i],maxi);
    maximum(arr,n,i+1,maxi);
    
}
int main()
{
    int arr[]={50,30,70,20} ;
    int n = 4;
    int i = 0;
    int maxi = INT_MIN;  
    maximum(arr,n,i,maxi);
    cout<<"Maximum element is : "<<maxi;
    return 0;
}