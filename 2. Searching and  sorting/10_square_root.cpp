// find square root of a number using  binary method.
#include<iostream> 
#include<vector> 
using namespace std;
float square(int no){
    vector<int> arr ;      // we will create a sample space.
    for(int i = 0;i<no;i++){
        arr.push_back(i);
    }
    // for(int i = 0;i<no;i++){
    //     cout<<arr[i]<<" ";
    // }
    int s = 0;
    int e = arr.size()-1;
    int mid = s+(e-s)/2;
    float ans = -1;
    while(s<=e){
        if(mid*mid==no){
            return mid;
        }
        else if(arr[mid]*arr[mid]<no){    // (mid*mid<no) both same 
            s = mid +1 ;
            ans = mid;
        }
        else{
            e = mid -1;
        }
         mid = s+(e-s)/2;
    }
    return ans;
    
    
}
int main(){
    int number = 17;
    cout<<square(number);
    
}
