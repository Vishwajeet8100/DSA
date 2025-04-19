// find out minimum no of elements in arr required to get the final target.
// coin change problem base.
// written in notebook properly.


#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
int answer(vector<int> arr, int target){
    if(target == 0){
        return 0;
    }
    if(target<0){
        return INT_MAX;
    }
    int mini = INT_MAX;
    for (int i = 0; i < arr.size(); i++)
    {
        int ans = answer(arr,target - arr[i]);
        if(ans != INT_MAX){
            mini = min(mini, ans+1);
        }
    }
    return mini;
}
int main()
{
    vector<int> arr = {1,2};
    int target = 5;

    // here answer should be 2 as we require 1+2 = 3
    cout<<answer(arr,target);
    return 0;
}