// Using recursion to check if the array is sorted or not.


// ✅ Using vector<int>& num reduces space from O(N) to O(1) and improves time from O(N²) to O(N).
// Always pass large structures (like vectors) by reference in recursive functions to optimize performance. 🚀

#include<iostream>
#include<vector>
using namespace std;
bool sorted(vector<int>& num, int n, int i){
    if(i >= n-1){    // index out of bond.
        return true;
    }
    if(num[i]>num[i+1]){
        return false;
    }
    return sorted(num,n,i+1);

}
int main()
{
    vector<int> num = {10,20,30,40};
    int size = num.size()-1;
    int i = 0;
    if(sorted(num,size,i)){
        cout<<"Array is sorted ";
    }else{
        cout<<"Array is NOT sorted ";
    }

    return 0;
}