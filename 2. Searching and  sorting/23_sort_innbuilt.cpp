// using inbuilt sort function
// it has n(log n) time comlexity
// made from hybrid sort algorithm.

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    // in built sort on vector
    vector<int> arr = {3,8,4,6,1,2};
    sort(arr.begin(),arr.end());
    for (int i = 0; i < arr.size(); i++)
    {
        cout<<arr[i]<<" ";
    }
    
    // in built sort on an array 
    int brr[]= {3,6,4,8,1,9};
    int size = 6;
    cout<<endl;
    sort(brr,brr+size);
     for (int i = 0; i < arr.size(); i++)
    {
        cout<<brr[i]<<" ";
    }
    return 0;
}