// Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] inclusive.
// There is only one repeated number in nums, return this repeated number.
// You must solve the problem without modifying the array nums and using only constant extra space.



// below approach done by me, complexity n^2 so time limit will exceed for large numbers.
#include<iostream>
#include<vector>
using namespace std;
int multiple(int arr[], int size){
    for(int i = 0; i<size;i++){
        for(int j = 0 ;j<size;j++){
            if(j==i){
                continue;
            }
            if(arr[i] == arr[j]){
            return arr[i];
            }
        }

    }
    return -1; // return something if all elements in array do not have a duplicate.
}
int main()
{
       int arr[]={1,3,2,4,5,6,3};
    int siz = sizeof(arr)/sizeof(int);
    cout<<multiple(arr,siz);
    
    return 0;
}

// another approach using sort fucntion.

// in this approach time limit will not exceed cause we used in built sort fucntion which has
// very less time complexity which is nlogn, so time complexity of function will be nlogn + n, therefore n.
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int multiple(int arr[], int size){
   sort(arr,arr+size);
   for(int i = 0;i<size-1;i++){
    if(arr[i]==arr[i+1]){
        return arr[i];
    }
   }

    return -1; // return something if all elements in array do not have a duplicate.
}
int main()
{
       int arr[]={1,3,2,4,5,6,6};
    int siz = sizeof(arr)/sizeof(int);
    cout<<multiple(arr,siz);
    
    return 0;
}


// another method is negative marking method.
// check video for better understandig.

#include<iostream>
#include<vector>
using namespace std;
int reapeat(vector<int> & arr){
    int ans = -1;
    for(int i = 0;i<arr.size();i++){
        int index = abs(arr[i]);
        if(arr[index]<0){
            ans = index;
        }
        arr[index] = arr[index] * (-1);
    }
    return ans;

}
int main()
{
    vector<int> arr={1,3,4,2,2};
    cout<<reapeat(arr);
    return 0;
}