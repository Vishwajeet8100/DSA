// binary search on a nearly sorted array.
// learn about nearly sorted if you forget its easy.
#include<iostream>
#include<vector>
using namespace std;
int search(vector<int> brr, int key){
    int s = 0;
    int e = brr.size()-1;
    int mid = s+(e-s)/2;
    while(s<=e){
        if(brr[mid]== key){
            return mid;
        }
        if(brr[mid+1]== key){    //  can also add (mid + 1<= e &&  brr[mid+1]== key )
            return mid+1;
        }
        if(brr[mid-1]== key){   //  can also add (mid - 1>= s &&  brr[mid+1]== key )
            return mid-1;
        }
        else if (brr[mid]<key){      
            s = mid + 2;
        }
        else{
            e = mid -2;
        }
        mid = s+(e-s)/2;
    }
    return -1;
}
int main()
{
    vector<int> arr = {10,3,40,20,50,80,70};
    int target = 10;
    cout<<search(arr,target);
    return 0;
}