//Q2_  find k closest element .
// using binary seacrh approach approach.

#include<iostream>
#include<vector>
using namespace std;

    int lower_bound(vector<int>& arr, int x) {
        
        int s = 0;
        int e = arr.size()-1;
        int mid = s+(e-s)/2;
        int ans = e;   // we didnt do -1 we did ans as it will help if  x > given array elements.

        while(s<=e){
           
            if(arr[mid]==x){
                ans = mid ;
                break;
            }
            else if(arr[mid]>x){
                ans = mid;
                e = mid -1 ;
            }
            else{
                s = mid +1 ;
            }
            mid = s+(e-s)/2;
        }
        return ans ;
       
    }
     vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        
        int h = lower_bound(arr,x);
        int l = h-1;
        while(k>0){
            if(l<0){     // left edge case.
                h++;
            }
            else if(h>=arr.size()){    // right edge case.
                l--;
            }
            else if(abs(arr[h]-x)<abs(arr[l]-x)){
                h++;
            }
            else{
                l--;
            }
            
            k--;
        }
        return vector<int>(arr.begin()+l+1,arr.begin()+h);

    }

int main()
{
    vector<int> arr = {1,1,2,3,4,5};
    int k = 4;
    int x = -1;
    vector<int> ans = findClosestElements(arr,k,x);
    for (int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }
    
    return 0;
}