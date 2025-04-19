//  not in course. done from striver sheet.
#include<iostream>   // to check wether the array is sorted or not.
using namespace std; 
bool sorted(int arr[],int size){
    bool flag = 0;
    for(int i =  0;i<size-1;i++){
        if(arr[i]<=arr[i+1]){
            flag = true;
        }
        else{
            flag = false;
            break;
        }
    }
        return flag;
}
int main()
{
    int arr[]= {2,7,9,5};  // sort and unsort the array and run code  // 0 means array in not sorted and 1 means its sorted.
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<sorted(arr,size);
    return 0;
}