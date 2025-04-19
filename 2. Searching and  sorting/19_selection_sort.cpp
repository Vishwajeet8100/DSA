// selection sort 

#include <iostream>
#include <vector>
using namespace std;
void sort(int arr[], int size)
{
    // outer loop runs n-1  times as last element will come sorted .
    for (int i = 0; i < size-1; i++)
    {
       int min= i;
        // index of minimum element and swap 
        for (int j = i+1; j < size; j++)
        {
            if (arr[min]>arr[j])
            {
               min = j;
               
            }
        }
        swap(arr[i],arr[min]);
    }
}
int main()
{
    int brr[] = {5,4,3,2,1,100};
    int size = sizeof(brr) / 4 ;
    sort(brr, size);
    for (int i = 0; i < size ; i++)
    {
        cout << brr[i]<<" ";
    }

    return 0;
}