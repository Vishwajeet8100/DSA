//bubble sort.
#include<iostream>
#include<vector>
using namespace std;
void bubble_sort(int arr[],int size){
    for (int round = 1; round < size; round++)
    {
        for (int j = 0; j < size- round ; j++)    // here instead of (size - round) we can also use (size - 1) but its faltu to do above iterations cause it will be already sorted
        {
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
        
    }
    
}
int main()
{
    int brr[] = {5,4,3,2,11,99,88,77,44,55};
    int size = sizeof(brr) / 4 ;
    bubble_sort(brr,size);
    for (int i = 0; i < size ; i++)
    {
        cout << brr[i]<<" ";
    }

    return 0;
}