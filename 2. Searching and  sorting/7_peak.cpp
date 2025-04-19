// finding peak element in an sorted array.

#include<iostream>
#include<vector>
using namespace std;
int peak(vector<int> arr){
    int s = 0;
    int e = arr.size()-1;
    int mid = s +(e-s)/2;
    while(s<=e){
        if(arr[mid-1]<arr[mid]&&arr[mid+1]<arr[mid]){
            return mid ;
        }
        else(s = mid +1);
        mid = s +(e-s)/2;

    }
}
int main()
{
    vector<int> arr ={1,2,1,3,5,6,4};
    cout<<peak(arr);
    return 0;
}