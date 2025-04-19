#include<iostream>    // find the maximum no form an array.
// I did it by my own by sorting array 
using namespace std;
void print(int arr[],int size){   // function to print the array.
    for(int i= 0;i<size;i++){
        cout<<arr[i]<<", ";
    }
}
void sort(int arr[], int size){     // function to sort the array.
    for(int j = 0; j<size-1;j++){
    for(int i = 0; i<size-1;i++){
        if (arr[i]>arr[i+1]){
            int j = arr[i+1];  
            arr[i+1]= arr[i];
            arr[i]= j;
        }
    }}
}
int main()
{
    int arr[]= { 4,3,2,66,5,7,1};
    int size = 7;
    sort(arr,size);
    print(arr,size);
    cout<<endl<<"Max no in array is: "<< arr[size-1]; // last no of sorted array will be the max no. 
    return 0;
} 