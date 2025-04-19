// find odd occurnce of element;
// all elements occur in pair except one ;
// we have to find that one

#include<iostream>
#include<vector>
using namespace std;
int ans(vector<int> arr ){
   int s = 0 ;
    int e =  arr.size()-1;
    int mid = s+(e-s)/2;
    while(s<=e){
        if( s == e){
            return arr[s];   // return ans
        }
        // even mid
        if(mid % 2 == 0){
            if(arr[mid +1]==arr[mid]){
                s = mid + 2;
            }
           else{
            e = mid;
           }
        }
        //odd mid
        else{
            if(arr[mid-1]==arr[mid]){
                s = mid +1; 
            }
            else {
                e = mid -1;
            }
        }
        mid = s+(e-s)/2;
    }
}
int main()
{
    // vector<int> arr = {1,1,2,2,3,3,4,600,600,4,4};
    // vector<int> arr = {1};
    vector<int> arr = {1,1,2,2,3,3,4,4,3,600,600,4,4};
    cout<<ans(arr);
    return 0;
}



// this method done by me
//ans is correct but giving some error as overflow in leetcode 


// #include<iostream>
// #include<vector>
// using namespace std;
// int ans(vector<int> arr ){
//    int s = 0 ;
//     int e =  arr.size()-1;
//     int mid = s+(e-s)/2;
//     while(s<=e){
        
//         if(mid % 2 == 0){
//             if(arr[mid +1]==arr[mid]){
//                 s = mid + 2;
//             }
//             else if ( arr[mid - 1]==arr[mid]){
//                 e = mid - 2;
//             }
//             else{
//                 return arr[mid];
//             }
//         }
//         else{
//             if(arr[mid-1]==arr[mid]){
//                 s = mid +1; 
//             }
//             else {
//                 e = mid -1;
//             }
//         }
//         mid = s+(e-s)/2;
//     }
// }
// int main()
// {
//     // vector<int> arr = {1,1,2,2,3,3,4,600,600,4,4};
//     // vector<int> arr = {1,1,2,2,3,3,4,4,3,600,600,4,4};
//      vector<int> arr = {1};
//     cout<<ans(arr);
//     return 0;
// }