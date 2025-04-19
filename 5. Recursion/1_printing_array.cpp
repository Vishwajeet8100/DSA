// here we are printing array using recursion.

#include<iostream>
#include<vector>
using namespace std;
void printarr(int arr[], int size){
    
    if(size == 0){  // every recursive fucntion has a stopping condition calles base condition.
        return;
    }
    
    cout<<*arr<<" ";  // it has some calculation to be done.
    
    printarr(arr+1,size-1); // again calling the recursive function.
}
int main()
{
    int arr[] = {1,2,3,4,5,6};
    int size = 6;
    printarr(arr,size);
    return 0;
}