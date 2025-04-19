// leetcode 204.
// seive of eratothenes theorem to count prime.
// count no of prime betn 0 and n .


#include<iostream>
#include<vector>
using namespace std;
int main()
{
   int n = 10;
    vector<bool> prime(n,true);
    prime[0]=prime[1]=false;
    int ans = 0;
    for (int  i = 2; i < n; i++)
    {
        if(prime[i]){
            cout<<i<<" ";
            ans++;
            int j = 2 *  i;
            while(j<n){
                prime[j]=false;
                j= j + i;
            }
        }
    }
    cout<<endl;
    cout<<" so the total no of primes are : "<<ans;
}