// we solved using two methods both give the same answer


// move all negative elements to one side of array.
// using single pointer done by me.
#include<iostream>
#include<vector>
using namespace std;
void move(int arr[], int size){
    int l = 0;
    for (int i = 0; i < size; i++)
    {
        if(arr[i]<0){
            swap(arr[l],arr[i]);
            l++;
        }
    }
    for (int i = 0; i <size ; i++)
    {
        cout<<arr[i];
    }
    
}
int main()
{
    int arr[]={1,3,-2,-4,5,-6};
    int siz = sizeof(arr)/sizeof(int);
    move(arr,siz);
    return 0;

}

// move all negative elements to one side of array.
// dutch national flag approach , i.e using two pointers.
#include<iostream>
#include<vector>
using namespace std;
void move(int arr[], int size){
    int l = 0;
    int h = size - 1;
    while (l<=h){
        if(arr[l]<0){
            l++;
        }
        else if(arr[h]>0){
            h--;
        }
        else(swap(arr[l],arr[h]));
    }
    for (int i = 0; i <size ; i++)
    {
        cout<<arr[i];
    }
}
int main()
{
    int arr[]={1,3,-2,-4,5};
    int siz = sizeof(arr)/sizeof(int);
    move(arr,siz);
    return 0;

}