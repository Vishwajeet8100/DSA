// I dont know what kind of sort it is i did it on my own  
// LOL    check from  next question 
#include <iostream>
#include <vector>
using namespace std;
void sort(int arr[], int size)
{
    for (int i = 0; i < size-1; i++)
    {
        for (int j = i+1; j < size; j++)
        {
            if (arr[i] > arr[j])
            {
                swap(arr[i],arr[j]);
            }
        }
    }
}
int main()
{
    int brr[] = {10, 4, 2, 9, 5, 7,100,99,88,77};
    int size = sizeof(brr) / 4 ;
    sort(brr, size);
    for (int i = 0; i < size ; i++)
    {
        cout << brr[i]<<" ";
    }

    return 0;
}