#include<iostream>
#include<limits.h>
using namespace std;
void max(int arr[],int size){       // using method given in array.
    int max = INT_MIN;
    for(int i = 0; i<size;i++){
        
        if(arr[i]>=max){
            max = arr[i];
        }
    }
    cout<<"Maximum no is : "<<max;
}
int main()

{
    int arr[]= {3,14,7,2,8,5};
    int size = 6;
    max(arr,size);

    return 0;
}