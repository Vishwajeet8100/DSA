// find first and last occurence of elemet with binary search. complexity o(Logn)

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int left (vector<int> brr, int key){    // finding index of first occurence
    int s = 0;
    int e = brr.size()-1;
    int mid = s +(e-s)/2;
    
     int first= -1;
    while(s<=e){
        if(brr[mid]== key){
            first = mid;
            e = mid - 1; 
        }
        else if(brr[mid]> key){
            e = mid - 1 ;
        }
        else
        {s = mid + 1;}

        mid = s + (e- s)/2;
    } 
        return first;
   
}
int right (vector<int> brr, int key){   // finding index of last occurence.
    int s = 0;
    int e = brr.size()-1;
    int mid = s +(e-s)/2;
    
        int last = -1;
    while(s<=e){
        if(brr[mid]== key){
            last= mid;
            s = mid + 1; 
        }
        else if(brr[mid]> key){
            e = mid - 1 ;
        }
        else
        {s = mid + 1;}

        mid = s + (e- s)/2;
    }
       return last;
}
   vector<int> answer(vector<int> arr, int key){
        vector<int> err;                // storing first and last occurence in the vector err.
         err.push_back(left(arr,key));
         err.push_back(right(arr,key));
         return err;
   }
   // we can find total no of occurence by = last occurence - first occurence + 1;
int main()
{
    vector<int> arr = { 1,2,2,4,4,4};
    int key = 2;
    vector<int> frr= answer(arr, key);
    for (int i = 0; i < frr.size(); i++)
    {
        cout<<frr[i];

    }
    
    return 0;
}

