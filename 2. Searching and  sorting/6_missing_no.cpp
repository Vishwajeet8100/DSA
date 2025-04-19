// retun missing no from an continous sorted array but with complexity logn .
// done by myself very happy.

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int missing(vector<int> arr){
    int s = 0;
    int e = arr.size()-1;
    int mid = s+(e-s)/2;
    while(s<e){
        if( arr[mid]==mid+1){
            s=mid +1;
        }
        else if( arr[mid]==mid+2){
            e = mid - 1;
        }
        mid = s+(e-s)/2;
        if(s==e){
            if(arr[s]+1 != arr[s+1]){
                return arr[s]+1;
            }
            else{
                return arr[s]-1;
            }
        }
    }
}
int main()
{
    vector<int> arr ={1,2,3,4,6,7};
    cout<<missing(arr);
    return 0;
}