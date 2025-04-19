// insertion sort,( sirs logic  which is the mostly used  logic but your is also correct )
//  here we insert the elements into their right position starting form first element and comparing them, with the previous elements.

#include <iostream>
#include <vector>
using namespace std;
void insertion_sort(int arr[], int size)
{
    for (int i = 1; i < size; i++)
    {
        int a = arr[i]; // gfetch the elements starting from second element as first will be placed in its location only.

        int j = i - 1; // just removed j condition from for loop outside.
        
        for (    ;  j >= 0 ; j-- )
        {
            if (a < arr[j])
            {

                arr[j + 1] = arr[j];
            }
            else
            {
                break;
            }
        }
        arr[j + 1] = a;
    }
}
int main()
{
    int arr[] = {10,1,7,6,14,9};
    int size = sizeof(arr) / sizeof(int);
    insertion_sort(arr, size);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}