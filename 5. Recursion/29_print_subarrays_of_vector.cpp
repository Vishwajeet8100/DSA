// print all  the subarryas of an array. 
// done by myself.

#include<iostream>
#include<vector>
using namespace std;
void print(vector<int>&arr, int& start , int& end){
    
    // base case 
    if(end == arr.size()){
        start = start +1;
        end = start;
    }
    if(start == arr.size()){
        return;
    }
    
    // one case 
    for (int i = start; i <= end; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    //recursion 
    
    print(arr,start,++end);
    
}
int main()
{
    vector<int> arr = {1,2,3,4};
    int start = 0;
    int end = 0;
    print(arr,start,end);

    return 0;
}