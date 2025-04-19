//assignment Q1 - To find k difference pairs in an array leetcode 532.
// code implemented by sir - method 1 (two pointer approach).

#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;

    int findPairs(vector<int>& nums, int k) {
        int s = 0;
        int e = 1;
        sort(nums.begin(),nums.end());
        set<pair<int,int>>count;
        while(e<nums.size()){
            if(nums[e]-nums[s]==k){
                s++;
                e++;
                count.insert({nums[s],nums[e]});
            }
            else if(nums[e]-nums[s] > k){
                s++;
            }
            else{
                e++;
            }
            if(s==e){
                e++;
            }
        }
        
        return count.size();
    }

int main()
{
    vector<int> arr = {1,2,3,4,5}; 
   int k = 1;
   cout<<findPairs(arr,k);    
   return 0;
}