#include<iostream>
#include<limits.h>
using namespace std;                   // to find the min no form an array 
int min(int arr[],int size){
    int min = INT_MAX;
    for(int i=0;i<size;i++){
        if(arr[i]<min){
            min = arr[i];
        }
    }
    return min;
}
int main()
{
    int arr []={3,4,2,5,6,7};
    int size = 6;
    cout<<min(arr,size);

    return 0;
}