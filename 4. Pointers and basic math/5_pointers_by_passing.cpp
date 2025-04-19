// an pointer to base of array is passed in the function.(pass by reference).

// this is the reason why we dont do sizeof(arr)/sizeof(int)  inside the fucntion.
// as size of arr is size of pointer which is always 4 and 

#include<iostream>
#include<vector>
using namespace std;
void passarr(int arr[]){
    cout<<"Value of arr is : "<<arr<<endl;
    cout<<"Value of &arr is : "<<&arr<<endl;
    cout<<"Value of size of arr is : "<<sizeof(arr)<<endl; //  this will give what is size of pointer which is 4 always.
    arr[0]= 80; // same as *(arr+0)
    *(arr+1) = 90;
}

int main()
{
    int arr[] = {10,20,30,40,50};
    cout<<"Value of arr is : "<<arr<<endl;
    cout<<"Value of &arr is : "<<&arr<<endl;
    cout<<"Value of size of arr is : "<<sizeof(arr)<<endl<<endl;
    int size = sizeof(arr)/sizeof(int);                                            
    passarr(arr);
    cout<<endl;

    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}