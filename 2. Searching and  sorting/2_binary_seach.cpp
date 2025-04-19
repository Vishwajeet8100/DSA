// binary linear search algorithm.
#include<iostream>
#include<vector>
using namespace std;
int search(vector <int> brr, int key){
        int l = 0;
        int h = brr.size()-1;
        int mid = (h + l)/2;    // its better to use mid = s+(e-s)/2
   while (l <= h){
     mid = (h + l)/2;
     if(brr[mid]== key){
        return mid + 1;
     }
     else if(brr[mid]<key){
        l = mid + 1;
     }
     else{h = mid - 1;}
      
   }
    return -1;
}
int main()
{
    vector<int>arr ={ 1,2,5,6};
    int key = 7;
    cout<<search(arr, key);
    return 0;
}