#include<iostream>    // sum of two elements shoul be equal to target.
#include<vector>
using namespace std;
void sol(vector<int> & arr, int target){
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i+1; j < arr.size(); j++)
        {
            if(arr[i]+arr[j]==target){
                cout<<arr[i]<<" "<<arr[j]<<endl; 
                break;
            }
        }
        
    }
    
}
int main()
{
    vector<int> arr{1,3,5,7,2,4,6};
    
    sol(arr,6);
    return 0;
}