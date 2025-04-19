#include<iostream>   // Reverse of array ,done by me i dont know whats the answer in video.
using namespace std;
void reverse(int arr[],int n ){
    int start = 0;
    int end = n-1;
    int t = 0;
    while(true){
        if(start>end){
            break;
        }
        else{
            t = arr[start];
            arr[start]= arr[end];
            arr[end]= t;
        }
        start++;
        end--;
    }
}
int main()
{
    int arr[]={1,2,3,4,5,6};
    int n = 6;
    reverse(arr,n);   // arrays are passed by reference so changes will be made in original array.
    for(int i = 0;i<n;i++){   // printing the reversed array.
        cout<<arr[i]<<" ";
    }

    return 0;
}