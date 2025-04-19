// we did no use array or vetor to store the elemnts.
#include<iostream>
#include<vector>
using namespace std;
int sqrt(int x){  
    int s = 0;
    int e = x;
    int ans = -1;
    int mid = s + (e-s)/2;
    while(s<=e){
        
        
          if(mid <= x/mid){
            ans = mid;
            s = mid +1;
        }
        else{
            e = mid - 1;
        }
        mid = s + (e-s)/2;
    }
  return ans;
 
};


int main()
{
   int key = 10;
    cout<<sqrt(key);

    
    return 0;
}