// exponentail search on inifinite array.
#include<iostream>
#include<vector>
using namespace std;
int ans(vector<int>& arr,int key,int start,int end){
    int mid = start+(end-start)/2;
    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key){
            end  = mid-1;
        }
        else{
            start = mid+1;
        }
        mid = start+(end-start)/2;
    }
}

int exp_search(vector<int>& arr, int key){
    if(arr[0]==key){
        return 0;
    }
    int i = 1;
    
    while(arr[i]<=key){
        i = i * 2;
        
    }
    ans(arr,key,i/2,i);
}

int main(){
    vector<int> arr ={1,2,3,4,5,6,7,8,9,10,11,12};//suppose infinite.
    int key = 6;
    cout<<exp_search(arr,key);
}