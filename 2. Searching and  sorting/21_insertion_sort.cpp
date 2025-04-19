//insertion sort,( done by me sir used different logic )
// here we insert the elements into their right position starting form first element and comparing them, with the previous elements.

#include<iostream>
#include<vector>
using namespace std;
void insertion_sort(int arr[],int size){
    for (int i = 1; i < size; i++)
    {
        int a = arr[i];   // gfetch the elements starting from second element as first will be placed in its location only.
        int store   = -1;
        for (int j = i-1 ; j >= 0; j--)
        {
            if(a<arr[j]){
                store = j;
                
                arr[j+1] = arr[j];
            }
            else{
                break;
            }
            
        }
      // if store is not updated we will not change the element. 
       if(store != -1){
        arr[store]=a;      // its okay if you dont use if statement
       }

        
    }
    
}
int main()
{
    int arr []={3,2,4};
    int size = sizeof(arr)/sizeof(int);
    insertion_sort(arr,size);
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}