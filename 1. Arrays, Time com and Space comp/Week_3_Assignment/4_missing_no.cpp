// return missing no from a array size n, containing one repeated no and all no in range 1 to n.
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int missing(vector<int> & arr){
   sort(arr.begin(),arr.end());
   for(int i = 0;i<arr.size();i++){
    if(arr[i]==arr[i+1]){
        continue;
    }
    if(arr[i]+1 != arr[i+1]){
        return arr[i]+1;
    }
   }
}
int main()
{
    vector<int> arr = {1,1,1,3,5};
    cout<<missing(arr);
    return 0;
}