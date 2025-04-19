// binary search using recursion.
#include<iostream>
#include<vector>
using namespace std;
int bs(vector<int>arr, int key, int s, int e){
    if(s>e){
        return -1;
    }
    int mid = (s+e)/2;
    if(arr[mid]==key){
        return mid;
    }
    if(arr[mid]>key){
        return bs(arr,key,s,mid-1);
    }else{
        return bs(arr,key,mid+1,e);
    }
}
int main()
{
    vector<int>arr = {10,20,30,40,50};
    int key = 50;
    int s = 0;
    int e = arr.size()-1;
    cout<<bs(arr,key,s,e);
    return 0;
}