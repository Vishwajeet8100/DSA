//Q2_  find k closest element .
// using 2 pointer approach.

#include<iostream>
#include<vector>
using namespace std;

    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int l = 0;
        int h = arr.size()-1;
        while((h-l) >= k ){
           
            if(abs(arr[l]-x)>abs(arr[h]-x)){
                l++;
            }
            else{
                h--;
                
            }
        }
       
        return vector<int>(arr.begin()+l,arr.begin()+h+1);  
        // here we did arr.begin()+h+1    " + 1 " at end beacause start is inclusive and end is exclusive 
        // so to include end in the ans we did " end + 1 ". to include the end index.
    }

int main()
{
    vector<int> arr = {1,2,3,4,5};
    int k = 4;
    int x = 3;
    vector<int> ans = findClosestElements(arr,k,x);
    for (int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }
    
    return 0;
}