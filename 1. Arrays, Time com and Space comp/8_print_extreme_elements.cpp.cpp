#include<iostream>          //  to print extreme elements from both sides in array , NOT ACCORDING TO VIDEO, VIDEO METHOD IS VERY EASY. 
using namespace std;
void print(int arr[],int size){
    if(size%2==0){              // if even no of elements in array
        for(int i =0;i<size/2;i++){
        cout<<arr[i]<<" "<<arr[size-i-1]<<" ";
         }
    }
    else{    //  if odd no of elements in array 
       for(int i =0;i<size/2;i++){
        cout<<arr[i]<<" "<<arr[size-i-1]<<" ";
         } 
         cout<<size/2+1; 
    }
}
int main()
{

// int arr[]={1,2,3,4,5};
int arr[]={1,2,3,4,5,6};   // even array
int n = 6 ;  // update n according to even or odd manually
  print( arr,n);
    return 0;
}
