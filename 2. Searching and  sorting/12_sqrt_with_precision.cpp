// find square root of a number with precision using  binary method.
#include<iostream> 
#include<vector> 
using namespace std;
double square(int no){
    vector<int> arr ;
    for(int i = 0;i<no;i++){
        arr.push_back(i);
    }
    // for(int i = 0;i<no;i++){
    //     cout<<arr[i]<<" ";
    // }
    int s = 0;
    int e = arr.size()-1;
    int mid = s+(e-s)/2;
    double ans = -1;
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

// method 1 to do it in 2 precisions with n time complexity.

//     for (int i = 0; i < 9; i++){
//         ans = ans + 0.1;
//         if(ans*ans>no){
            
//             break;
//         }
//     }
//     ans = ans - 0.1;
//    for (int i = 0; i < 9; i++){
//         ans = ans + 0.01;
//         if(ans*ans>no){
            
//             break;
//         }
//     }
//     ans = ans - 0.01;
//     return ans;


// method 2 to do it in precision with n^2 complexity.
int precision ;
cout<<" What precision to do you want : ";
cin>>precision;
double step = 0.1;

for(int i = 0 ; i< precision;i++){
 
for( double j = ans; j*j<no;j = j + step){
    ans = j;
 }
 step = step/10;
}
    
   return ans; 
}
int main(){
    int number = 10;
    cout<<square(number);
      
}
