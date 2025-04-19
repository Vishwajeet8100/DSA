// exponential search -> made from binary search 
// easy concept, done by me.
// application- v good than binary search in searching in very long arrays.
// application 2 - searching in infinite arrays where "n" is not known. 

#include <iostream>
#include <vector>
using namespace std;
int binary_search(vector<int>& arr,int key,int start,int end){
    int mid = start+(end-start)/2;
    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key){
            end  = mid -1;
        }
        else{
            start = mid +1 ;
        }
        mid = start+(end-start)/2;
    }
}
int exponential_search(vector<int> arr, int key)
{
    int n = arr.size();
    if (arr[0] == key)
    {
        return 0;
    }
    int i = 1;

    while (i < n && arr[i] <= key)
    {
        i = i * 2;
    }
    binary_search(arr,key,i/2,min(i,n-1));
}
int main()
{
    vector<int> brr = {1, 2, 3, 5, 7, 9, 10, 13, 15, 17};
    int key = 2;
    cout<<exponential_search(brr,key);

    return 0;
}
