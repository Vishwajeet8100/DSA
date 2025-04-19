// assignment Q1 - To find k difference pairs in an array leetcode 532.
// done by me high time complexity n^2.

#include<iostream>
#include<vector>
#include<set>
using namespace std;


 int findPairs(vector<int>& nums, int k) {
        set<pair<int,int>>count ;
       
        for(int i = 0; i<nums.size();i++){
            for(int j = i +1;j<nums.size();j++){
                if(abs(nums[i]-nums[j])==k && i!=j){
                    count.insert({min(nums[i],nums[j]),max(nums[i],nums[j])});
                }
            }
        }
        
        return count.size();
    }
        
    

int main()
{
   vector<int> arr = {3,1,4,1,5}; 
   int k = 2;
   cout<<findPairs(arr,k);
    return 0;
}