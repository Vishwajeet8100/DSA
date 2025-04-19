#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
   // vector
   vector <int> arr = {1,2,3};
   sort(arr.begin(),arr.end()); //  first and last iterator of an vector.
   
   // array 
   int brr[]={1,4,3,2};
   int size = sizeof(brr)/sizeof(int);
   sort(brr,brr+size);  //  first and last iterator of array 
   
   // printing sorted array and vector.
   for (int i = 0; i < arr.size(); i++)
   {
    cout<<arr[i];
   }
   cout<<endl;
   for (int i = 0; i < size; i++)
   {
    cout<<brr[i];
   }
   
    return 0;
}