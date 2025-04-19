#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int arr[]= {10,20,32,48};
    // all will give same answer that is the address of element 1.
    cout<<&arr[0]<<endl;
    cout<<&arr<<endl;  // this is little diff, remember
    cout<<arr<<endl;
    //
    cout<<arr[0]<<endl;
    cout<<*arr<<endl;
    cout<<*arr + 1<<endl;
    cout<<*(arr + 1)<<endl;
    cout<<*(arr + 2)<<endl;
    cout<<endl;
    
    // both the ways are same as   cout<<*(arr + 1)<<endl;   cout<<*(1 + arr)<<endl;   will give same answer.
    cout<<arr[1]<<endl;
    cout<<1[arr]<<endl<<endl;
    
    // size of arr and pointer will both be different 
    
    int * p = arr;     // you cna also write &arr or arr[0].
    cout<<sizeof(arr)<<endl;    //  size will be 4 * 4 elements  i.e. size taken by array
    cout<<sizeof(p)<<endl;  // size will be same 8(or 4 on architecure ) for all pointers.  i.e. size takne by a pointer.
    cout<<sizeof(*p)<<endl;   // this will be 4 as size of integer is 4 as *p  will be arr[0]  that is 10.
 

    // you cannot do 
    
    // arr = arr+1;   // because we cannot change the value in symbol table 
    // here we are changing the base address of arr.(which is not possible.)


    p = p+1;  // we can do this as this will be equal to address of arr[0] + 4  --> which will point to next element arr[1] == 20.
      // here we are changing the value of p and not the base address of p  
    return 0;  
}