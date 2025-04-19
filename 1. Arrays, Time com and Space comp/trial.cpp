#include<iostream>
#include<vector>
using namespace std;
 void sortColors(vector<int>& nums) {
        for(int i = 0; i<nums.size(); i++){
            if(nums[i]==0){
                cout<<0;
            }
        }
        for(int i = 0; i<nums.size(); i++){
            if(nums[i]==1){
                cout<<1;
            }
        }
        for(int i = 0; i<nums.size(); i++){
            if(nums[i]==2){
                cout<<2;
            }
        }
    }
int main()
{
   vector<int> arr ={2,1,0,2};
   sortColors(arr);
    return 0;
}