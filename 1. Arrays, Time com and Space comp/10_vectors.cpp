#include<iostream>
#include<vector>    // written about vectors in notebook
using namespace std;
int main()
{
    vector<int>nums;    
    nums.push_back(10);
    nums.push_back(20);
   
for(int i = 0;i<nums.size();i++){
    cout<<nums[i]<<" ";
}
    
    return 0;
} 