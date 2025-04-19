// binary search using recursion.
#include<iostream>
#include<vector>
using namespace std;
int bs (vector<int> arr, int key,int s, int l){
    if (s>l)
    {
        return -1;
    }
    int mid = (s+l)/2;
    if (arr[mid]==key)
    {
        return mid;
    }
    else if(arr[mid]>key){
        return bs(arr,key,s,mid-1);
    }
    else{
        return bs(arr,key,mid+1,l);
    }
    
}
int main()
{
    int a = 2;
    vector<int> arr ={1,2,3,4,5,6};
    int s =0;
    int l = arr.size()-1;
    cout<<bs(arr,a,s,l);
    return 0;
}